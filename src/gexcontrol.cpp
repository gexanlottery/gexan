// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2017 The GEX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "gexcontrol.h"
#include "utilstrencodings.h"
#include "netbase.h"
#include "net.h"
#include "util.h"
#include "crypto/hmac_sha256.h"

#include <vector>
#include <deque>
#include <set>
#include <stdlib.h>

#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <boost/signals2/signal.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/replace.hpp>

#include <event2/bufferevent.h>
#include <event2/buffer.h>
#include <event2/util.h>
#include <event2/event.h>
#include <event2/thread.h>

/** Default control port */
const std::string DEFAULT_GEX_CONTROL = "127.0.0.1:9051";
/** Gex cookie size (from control-spec.txt) */
static const int GEX_COOKIE_SIZE = 32;
/** Size of client/server nonce for SAFECOOKIE */
static const int GEX_NONCE_SIZE = 32;
/** For computing serverHash in SAFECOOKIE */
static const std::string GEX_SAFE_SERVERKEY = "Gex safe cookie authentication server-to-controller hash";
/** For computing clientHash in SAFECOOKIE */
static const std::string GEX_SAFE_CLIENTKEY = "Gex safe cookie authentication controller-to-server hash";
/** Exponential backoff configuration - initial timeout in seconds */
static const float RECONNECT_TIMEOUT_START = 1.0;
/** Exponential backoff configuration - growth factor */
static const float RECONNECT_TIMEOUT_EXP = 1.5;
/** Maximum length for lines received on GexControlConnection.
 * gex-control-spec.txt mentions that there is explicitly no limit defined to line length,
 * this is belt-and-suspenders sanity limit to prevent memory exhaustion.
 */
static const int MAX_LINE_LENGTH = 100000;

/****** Low-level GexControlConnection ********/

/** Reply from Gex, can be single or multi-line */
class GexControlReply
{
public:
    GexControlReply() { Clear(); }

    int code;
    std::vector<std::string> lines;

    void Clear()
    {
        code = 0;
        lines.clear();
    }
};

/** Low-level handling for Gex control connection.
 * Speaks the SMTP-like protocol as defined in gexspec/control-spec.txt
 */
class GexControlConnection
{
public:
    typedef boost::function<void(GexControlConnection&)> ConnectionCB;
    typedef boost::function<void(GexControlConnection &,const GexControlReply &)> ReplyHandlerCB;

    /** Create a new GexControlConnection.
     */
    GexControlConnection(struct event_base *base);
    ~GexControlConnection();

    /**
     * Connect to a Gex control port.
     * target is address of the form host:port.
     * connected is the handler that is called when connection is successfully established.
     * disconnected is a handler that is called when the connection is broken.
     * Return true on success.
     */
    bool Connect(const std::string &target, const ConnectionCB& connected, const ConnectionCB& disconnected);

    /**
     * Disconnect from Gex control port.
     */
    bool Disconnect();

    /** Send a command, register a handler for the reply.
     * A trailing CRLF is automatically added.
     * Return true on success.
     */
    bool Command(const std::string &cmd, const ReplyHandlerCB& reply_handler);

    /** Response handlers for async replies */
    boost::signals2::signal<void(GexControlConnection &,const GexControlReply &)> async_handler;
private:
    /** Callback when ready for use */
    boost::function<void(GexControlConnection&)> connected;
    /** Callback when connection lost */
    boost::function<void(GexControlConnection&)> disconnected;
    /** Libevent event base */
    struct event_base *base;
    /** Connection to control socket */
    struct bufferevent *b_conn;
    /** Message being received */
    GexControlReply message;
    /** Response handlers */
    std::deque<ReplyHandlerCB> reply_handlers;

    /** Libevent handlers: internal */
    static void readcb(struct bufferevent *bev, void *ctx);
    static void eventcb(struct bufferevent *bev, short what, void *ctx);
};

GexControlConnection::GexControlConnection(struct event_base *_base):
    base(_base), b_conn(0)
{
}

GexControlConnection::~GexControlConnection()
{
    if (b_conn)
        bufferevent_free(b_conn);
}

void GexControlConnection::readcb(struct bufferevent *bev, void *ctx)
{
    GexControlConnection *self = (GexControlConnection*)ctx;
    struct evbuffer *input = bufferevent_get_input(bev);
    size_t n_read_out = 0;
    char *line;
    assert(input);
    //  If there is not a whole line to read, evbuffer_readln returns NULL
    while((line = evbuffer_readln(input, &n_read_out, EVBUFFER_EOL_CRLF)) != NULL)
    {
        std::string s(line, n_read_out);
        free(line);
        if (s.size() < 4) // Short line
            continue;
        // <status>(-|+| )<data><CRLF>
        self->message.code = atoi(s.substr(0,3));
        self->message.lines.push_back(s.substr(4));
        char ch = s[3]; // '-','+' or ' '
        if (ch == ' ') {
            // Final line, dispatch reply and clean up
            if (self->message.code >= 600) {
                // Dispatch async notifications to async handler
                // Synchronous and asynchronous messages are never interleaved
                self->async_handler(*self, self->message);
            } else {
                if (!self->reply_handlers.empty()) {
                    // Invoke reply handler with message
                    self->reply_handlers.front()(*self, self->message);
                    self->reply_handlers.pop_front();
                } else {
                    LogPrint("gex", "gex: Received unexpected sync reply %i\n", self->message.code);
                }
            }
            self->message.Clear();
        }
    }
    //  Check for size of buffer - protect against memory exhaustion with very long lines
    //  Do this after evbuffer_readln to make sure all full lines have been
    //  removed from the buffer. Everything left is an incomplete line.
    if (evbuffer_get_length(input) > MAX_LINE_LENGTH) {
        LogPrintf("gex: Disconnecting because MAX_LINE_LENGTH exceeded\n");
        self->Disconnect();
    }
}

void GexControlConnection::eventcb(struct bufferevent *bev, short what, void *ctx)
{
    GexControlConnection *self = (GexControlConnection*)ctx;
    if (what & BEV_EVENT_CONNECTED) {
        LogPrint("gex", "gex: Successfully connected!\n");
        self->connected(*self);
    } else if (what & (BEV_EVENT_EOF|BEV_EVENT_ERROR)) {
        if (what & BEV_EVENT_ERROR) {
            LogPrint("gex", "gex: Error connecting to Gex control socket\n");
        } else {
            LogPrint("gex", "gex: End of stream\n");
        }
        self->Disconnect();
        self->disconnected(*self);
    }
}

bool GexControlConnection::Connect(const std::string &target, const ConnectionCB& _connected, const ConnectionCB&  _disconnected)
{
    if (b_conn)
        Disconnect();
    // Parse target address:port
    struct sockaddr_storage connect_to_addr;
    int connect_to_addrlen = sizeof(connect_to_addr);
    if (evutil_parse_sockaddr_port(target.c_str(),
        (struct sockaddr*)&connect_to_addr, &connect_to_addrlen)<0) {
        LogPrintf("gex: Error parsing socket address %s\n", target);
        return false;
    }

    // Create a new socket, set up callbacks and enable notification bits
    b_conn = bufferevent_socket_new(base, -1, BEV_OPT_CLOSE_ON_FREE);
    if (!b_conn)
        return false;
    bufferevent_setcb(b_conn, GexControlConnection::readcb, NULL, GexControlConnection::eventcb, this);
    bufferevent_enable(b_conn, EV_READ|EV_WRITE);
    this->connected = _connected;
    this->disconnected = _disconnected;

    // Finally, connect to target
    if (bufferevent_socket_connect(b_conn, (struct sockaddr*)&connect_to_addr, connect_to_addrlen) < 0) {
        LogPrintf("gex: Error connecting to address %s\n", target);
        return false;
    }
    return true;
}

bool GexControlConnection::Disconnect()
{
    if (b_conn)
        bufferevent_free(b_conn);
    b_conn = 0;
    return true;
}

bool GexControlConnection::Command(const std::string &cmd, const ReplyHandlerCB& reply_handler)
{
    if (!b_conn)
        return false;
    struct evbuffer *buf = bufferevent_get_output(b_conn);
    if (!buf)
        return false;
    evbuffer_add(buf, cmd.data(), cmd.size());
    evbuffer_add(buf, "\r\n", 2);
    reply_handlers.push_back(reply_handler);
    return true;
}

static std::pair<std::string,std::string> SplitGexReplyLine(const std::string &s)
{
    size_t ptr=0;
    std::string type;
    while (ptr < s.size() && s[ptr] != ' ') {
        type.push_back(s[ptr]);
        ++ptr;
    }
    if (ptr < s.size())
        ++ptr; // skip ' '
    return make_pair(type, s.substr(ptr));
}


static std::map<std::string,std::string> ParseGexReplyMapping(const std::string &s)
{
    std::map<std::string,std::string> mapping;
    size_t ptr=0;
    while (ptr < s.size()) {
        std::string key, value;
        while (ptr < s.size() && s[ptr] != '=' && s[ptr] != ' ') {
            key.push_back(s[ptr]);
            ++ptr;
        }
        if (ptr == s.size()) // unexpected end of line
            return std::map<std::string,std::string>();
        if (s[ptr] == ' ') // The remaining string is an OptArguments
            break;
        ++ptr; // skip '='
        if (ptr < s.size() && s[ptr] == '"') { // Quoted string
            ++ptr; // skip opening '"'
            bool escape_next = false;
            while (ptr < s.size() && (escape_next || s[ptr] != '"')) {
                // Repeated backslashes must be interpreted as pairs
                escape_next = (s[ptr] == '\\' && !escape_next);
                value.push_back(s[ptr]);
                ++ptr;
            }
            if (ptr == s.size()) // unexpected end of line
                return std::map<std::string,std::string>();
            ++ptr; // skip closing '"'
            
            std::string escaped_value;
            for (size_t i = 0; i < value.size(); ++i) {
                if (value[i] == '\\') {
                    // This will always be valid, because if the QuotedString
                    // ended in an odd number of backslashes, then the parser
                    // would already have returned above, due to a missing
                    // terminating double-quote.
                    ++i;
                    if (value[i] == 'n') {
                        escaped_value.push_back('\n');
                    } else if (value[i] == 't') {
                        escaped_value.push_back('\t');
                    } else if (value[i] == 'r') {
                        escaped_value.push_back('\r');
                    } else if ('0' <= value[i] && value[i] <= '7') {
                        size_t j;
                        // Octal escape sequences have a limit of three octal digits,
                        // but terminate at the first character that is not a valid
                        // octal digit if encountered sooner.
                        for (j = 1; j < 3 && (i+j) < value.size() && '0' <= value[i+j] && value[i+j] <= '7'; ++j) {}
                        // Gex restricts first digit to 0-3 for three-digit octals.
                        // A leading digit of 4-7 would therefore be interpreted as
                        // a two-digit octal.
                        if (j == 3 && value[i] > '3') {
                            j--;
                        }
                        escaped_value.push_back(strtol(value.substr(i, j).c_str(), NULL, 8));
                        // Account for automatic incrementing at loop end
                        i += j - 1;
                    } else {
                        escaped_value.push_back(value[i]);
                    }
                } else {
                    escaped_value.push_back(value[i]);
                }
            }
            value = escaped_value;
        } else { // Unquoted value. Note that values can contain '=' at will, just no spaces
            while (ptr < s.size() && s[ptr] != ' ') {
                value.push_back(s[ptr]);
                ++ptr;
            }
        }
        if (ptr < s.size() && s[ptr] == ' ')
            ++ptr; // skip ' ' after key=value
        mapping[key] = value;
    }
    return mapping;
}

/** Read full contents of a file and return them in a std::string.
 * Returns a pair <status, string>.
 * If an error occurred, status will be false, otherwise status will be true and the data will be returned in string.
 *
 * @param maxsize Puts a maximum size limit on the file that is read. If the file is larger than this, truncated data
 *         (with len > maxsize) will be returned.
 */
static std::pair<bool,std::string> ReadBinaryFile(const std::string &filename, size_t maxsize=std::numeric_limits<size_t>::max())
{
    FILE *f = fopen(filename.c_str(), "rb");
    if (f == NULL)
        return std::make_pair(false,"");
    std::string retval;
    char buffer[128];
    size_t n;
    while ((n=fread(buffer, 1, sizeof(buffer), f)) > 0) {
        // Check for reading errors so we don't return any data if we couldn't
        // read the entire file (or up to maxsize)
        if (ferror(f))
            return std::make_pair(false,"");
        retval.append(buffer, buffer+n);
        if (retval.size() > maxsize)
            break;
    }
    fclose(f);
    return std::make_pair(true,retval);
}

/** Write contents of std::string to a file.
 * @return true on success.
 */
static bool WriteBinaryFile(const std::string &filename, const std::string &data)
{
    FILE *f = fopen(filename.c_str(), "wb");
    if (f == NULL)
        return false;
    if (fwrite(data.data(), 1, data.size(), f) != data.size()) {
        fclose(f);
        return false;
    }
    fclose(f);
    return true;
}

/****** Bitcoin specific GexController implementation ********/

/** Controller that connects to Gex control socket, authenticate, then create
 * and maintain a ephemeral hidden service.
 */
class GexController
{
public:
    GexController(struct event_base* base, const std::string& target);
    ~GexController();

    /** Get name fo file to store private key in */
    std::string GetPrivateKeyFile();

    /** Reconnect, after getting disconnected */
    void Reconnect();
private:
    struct event_base* base;
    std::string target;
    GexControlConnection conn;
    std::string private_key;
    std::string service_id;
    bool reconnect;
    struct event *reconnect_ev;
    float reconnect_timeout;
    CService service;
    /** Cookie for SAFECOOKIE auth */
    std::vector<uint8_t> cookie;
    /** ClientNonce for SAFECOOKIE auth */
    std::vector<uint8_t> clientNonce;

    /** Callback for ADD_ONION result */
    void add_onion_cb(GexControlConnection& conn, const GexControlReply& reply);
    /** Callback for AUTHENTICATE result */
    void auth_cb(GexControlConnection& conn, const GexControlReply& reply);
    /** Callback for AUTHCHALLENGE result */
    void authchallenge_cb(GexControlConnection& conn, const GexControlReply& reply);
    /** Callback for PROTOCOLINFO result */
    void protocolinfo_cb(GexControlConnection& conn, const GexControlReply& reply);
    /** Callback after successful connection */
    void connected_cb(GexControlConnection& conn);
    /** Callback after connection lost or failed connection attempt */
    void disconnected_cb(GexControlConnection& conn);

    /** Callback for reconnect timer */
    static void reconnect_cb(evutil_socket_t fd, short what, void *arg);
};

GexController::GexController(struct event_base* _base, const std::string& _target):
    base(_base),
    target(_target), conn(base), reconnect(true), reconnect_ev(0),
    reconnect_timeout(RECONNECT_TIMEOUT_START)
{
    reconnect_ev = event_new(base, -1, 0, reconnect_cb, this);
    if (!reconnect_ev)
        LogPrintf("gex: Failed to create event for reconnection: out of memory?\n");
    // Start connection attempts immediately
    if (!conn.Connect(_target, boost::bind(&GexController::connected_cb, this, _1),
         boost::bind(&GexController::disconnected_cb, this, _1) )) {
        LogPrintf("gex: Initiating connection to Gex control port %s failed\n", _target);
    }
    // Read service private key if cached
    std::pair<bool,std::string> pkf = ReadBinaryFile(GetPrivateKeyFile());
    if (pkf.first) {
        LogPrint("gex", "gex: Reading cached private key from %s\n", GetPrivateKeyFile());
        private_key = pkf.second;
    }
}

GexController::~GexController()
{
    if (reconnect_ev) {
        event_free(reconnect_ev);
        reconnect_ev = 0;
    }
    if (service.IsValid()) {
        RemoveLocal(service);
    }
}

void GexController::add_onion_cb(GexControlConnection& _conn, const GexControlReply& reply)
{
    if (reply.code == 250) {
        LogPrint("gex", "gex: ADD_ONION successful\n");
        for (const std::string &s : reply.lines) {
            std::map<std::string,std::string> m = ParseGexReplyMapping(s);
            std::map<std::string,std::string>::iterator i;
            if ((i = m.find("ServiceID")) != m.end())
                service_id = i->second;
            if ((i = m.find("PrivateKey")) != m.end())
                private_key = i->second;
        }
        if (service_id.empty()) {
            LogPrintf("gex: Error parsing ADD_ONION parameters:\n");
            for (const std::string &s : reply.lines) {
                LogPrintf("    %s\n", SanitizeString(s));
            }
            return;
        }
        LookupNumeric(std::string(service_id+".onion").c_str(), service, GetListenPort());
        LogPrintf("gex: Got service ID %s, advertising service %s\n", service_id, service.ToString());
        if (WriteBinaryFile(GetPrivateKeyFile(), private_key)) {
            LogPrint("gex", "gex: Cached service private key to %s\n", GetPrivateKeyFile());
        } else {
            LogPrintf("gex: Error writing service private key to %s\n", GetPrivateKeyFile());
        }
        AddLocal(service, LOCAL_MANUAL);
        // ... onion requested - keep connection open
    } else if (reply.code == 510) { // 510 Unrecognized command
        LogPrintf("gex: Add onion failed with unrecognized command (You probably need to upgrade Gex)\n");
    } else {
        LogPrintf("gex: Add onion failed; error code %d\n", reply.code);
    }
}

void GexController::auth_cb(GexControlConnection& _conn, const GexControlReply& reply)
{
    if (reply.code == 250) {
        LogPrint("gex", "gex: Authentication successful\n");

        // Now that we know Gex is running setup the proxy for onion addresses
        // if -onion isn't set to something else.
        if (GetArg("-onion", "") == "") {
            CService resolved;
            assert(LookupNumeric("127.0.0.1", resolved, 9050));
            CService addrOnion = CService(resolved, 9050);
            SetProxy(NET_TOR, addrOnion);
            SetLimited(NET_TOR, false);
        }

        // Finally - now create the service
        if (private_key.empty()) // No private key, generate one
            private_key = "NEW:RSA1024"; // Explicitly request RSA1024 - see issue #9214
        // Request hidden service, redirect port.
        // Note that the 'virtual' port doesn't have to be the same as our internal port, but this is just a convenient
        // choice.  TODO; refactor the shutdown sequence some day.
        _conn.Command(strprintf("ADD_ONION %s Port=%i,127.0.0.1:%i", private_key, GetListenPort(), GetListenPort()),
            boost::bind(&GexController::add_onion_cb, this, _1, _2));
    } else {
        LogPrintf("gex: Authentication failed\n");
    }
}

/** Compute Gex SAFECOOKIE response.
 *
 *    ServerHash is computed as:
 *      HMAC-SHA256("Gex safe cookie authentication server-to-controller hash",
 *                  CookieString | ClientNonce | ServerNonce)
 *    (with the HMAC key as its first argument)
 *
 *    After a controller sends a successful AUTHCHALLENGE command, the
 *    next command sent on the connection must be an AUTHENTICATE command,
 *    and the only authentication string which that AUTHENTICATE command
 *    will accept is:
 *
 *      HMAC-SHA256("Gex safe cookie authentication controller-to-server hash",
 *                  CookieString | ClientNonce | ServerNonce)
 *
 */
static std::vector<uint8_t> ComputeResponse(const std::string &key, const std::vector<uint8_t> &cookie,  const std::vector<uint8_t> &clientNonce, const std::vector<uint8_t> &serverNonce)
{
    CHMAC_SHA256 computeHash((const uint8_t*)key.data(), key.size());
    std::vector<uint8_t> computedHash(CHMAC_SHA256::OUTPUT_SIZE, 0);
    computeHash.Write(cookie.data(), cookie.size());
    computeHash.Write(clientNonce.data(), clientNonce.size());
    computeHash.Write(serverNonce.data(), serverNonce.size());
    computeHash.Finalize(computedHash.data());
    return computedHash;
}

void GexController::authchallenge_cb(GexControlConnection& _conn, const GexControlReply& reply)
{
    if (reply.code == 250) {
        LogPrint("gex", "gex: SAFECOOKIE authentication challenge successful\n");
        std::pair<std::string,std::string> l = SplitGexReplyLine(reply.lines[0]);
        if (l.first == "AUTHCHALLENGE") {
            std::map<std::string,std::string> m = ParseGexReplyMapping(l.second);
            if (m.empty()) {
                LogPrintf("gex: Error parsing AUTHCHALLENGE parameters: %s\n", SanitizeString(l.second));
                return;
            }
            std::vector<uint8_t> serverHash = ParseHex(m["SERVERHASH"]);
            std::vector<uint8_t> serverNonce = ParseHex(m["SERVERNONCE"]);
            LogPrint("gex", "gex: AUTHCHALLENGE ServerHash %s ServerNonce %s\n", HexStr(serverHash), HexStr(serverNonce));
            if (serverNonce.size() != 32) {
                LogPrintf("gex: ServerNonce is not 32 bytes, as required by spec\n");
                return;
            }

            std::vector<uint8_t> computedServerHash = ComputeResponse(GEX_SAFE_SERVERKEY, cookie, clientNonce, serverNonce);
            if (computedServerHash != serverHash) {
                LogPrintf("gex: ServerHash %s does not match expected ServerHash %s\n", HexStr(serverHash), HexStr(computedServerHash));
                return;
            }

            std::vector<uint8_t> computedClientHash = ComputeResponse(GEX_SAFE_CLIENTKEY, cookie, clientNonce, serverNonce);
            _conn.Command("AUTHENTICATE " + HexStr(computedClientHash), boost::bind(&GexController::auth_cb, this, _1, _2));
        } else {
            LogPrintf("gex: Invalid reply to AUTHCHALLENGE\n");
        }
    } else {
        LogPrintf("gex: SAFECOOKIE authentication challenge failed\n");
    }
}

void GexController::protocolinfo_cb(GexControlConnection& _conn, const GexControlReply& reply)
{
    if (reply.code == 250) {
        std::set<std::string> methods;
        std::string cookiefile;
        /*
         * 250-AUTH METHODS=COOKIE,SAFECOOKIE COOKIEFILE="/home/x/.gex/control_auth_cookie"
         * 250-AUTH METHODS=NULL
         * 250-AUTH METHODS=HASHEDPASSWORD
         */
        for (const std::string &s : reply.lines) {
            std::pair<std::string,std::string> l = SplitGexReplyLine(s);
            if (l.first == "AUTH") {
                std::map<std::string,std::string> m = ParseGexReplyMapping(l.second);
                std::map<std::string,std::string>::iterator i;
                if ((i = m.find("METHODS")) != m.end())
                    boost::split(methods, i->second, boost::is_any_of(","));
                if ((i = m.find("COOKIEFILE")) != m.end())
                    cookiefile = i->second;
            } else if (l.first == "VERSION") {
                std::map<std::string,std::string> m = ParseGexReplyMapping(l.second);
                std::map<std::string,std::string>::iterator i;
                if ((i = m.find("Gex")) != m.end()) {
                    LogPrint("gex", "gex: Connected to Gex version %s\n", i->second);
                }
            }
        }
        for (const std::string &s : methods) {
            LogPrint("gex", "gex: Supported authentication method: %s\n", s);
        }
        // Prefer NULL, otherwise SAFECOOKIE. If a password is provided, use HASHEDPASSWORD
        /* Authentication:
         *   cookie:   hex-encoded ~/.gex/control_auth_cookie
         *   password: "password"
         */
        std::string gexpassword = GetArg("-gexpassword", "");
        if (!gexpassword.empty()) {
            if (methods.count("HASHEDPASSWORD")) {
                LogPrint("gex", "gex: Using HASHEDPASSWORD authentication\n");
                boost::replace_all(gexpassword, "\"", "\\\"");
                _conn.Command("AUTHENTICATE \"" + gexpassword + "\"", boost::bind(&GexController::auth_cb, this, _1, _2));
            } else {
                LogPrintf("gex: Password provided with -gexpassword, but HASHEDPASSWORD authentication is not available\n");
            }
        } else if (methods.count("NULL")) {
            LogPrint("gex", "gex: Using NULL authentication\n");
            _conn.Command("AUTHENTICATE", boost::bind(&GexController::auth_cb, this, _1, _2));
        } else if (methods.count("SAFECOOKIE")) {
            // Cookie: hexdump -e '32/1 "%02x""\n"'  ~/.gex/control_auth_cookie
            LogPrint("gex", "gex: Using SAFECOOKIE authentication, reading cookie authentication from %s\n", cookiefile);
            std::pair<bool,std::string> status_cookie = ReadBinaryFile(cookiefile, GEX_COOKIE_SIZE);
            if (status_cookie.first && status_cookie.second.size() == GEX_COOKIE_SIZE) {
                // _conn.Command("AUTHENTICATE " + HexStr(status_cookie.second), boost::bind(&GexController::auth_cb, this, _1, _2));
                cookie = std::vector<uint8_t>(status_cookie.second.begin(), status_cookie.second.end());
                clientNonce = std::vector<uint8_t>(GEX_NONCE_SIZE, 0);
                GetRandBytes(&clientNonce[0], GEX_NONCE_SIZE);
                _conn.Command("AUTHCHALLENGE SAFECOOKIE " + HexStr(clientNonce), boost::bind(&GexController::authchallenge_cb, this, _1, _2));
            } else {
                if (status_cookie.first) {
                    LogPrintf("gex: Authentication cookie %s is not exactly %i bytes, as is required by the spec\n", cookiefile, GEX_COOKIE_SIZE);
                } else {
                    LogPrintf("gex: Authentication cookie %s could not be opened (check permissions)\n", cookiefile);
                }
            }
        } else if (methods.count("HASHEDPASSWORD")) {
            LogPrintf("gex: The only supported authentication mechanism left is password, but no password provided with -gexpassword\n");
        } else {
            LogPrintf("gex: No supported authentication method\n");
        }
    } else {
        LogPrintf("gex: Requesting protocol info failed\n");
    }
}

void GexController::connected_cb(GexControlConnection& _conn)
{
    reconnect_timeout = RECONNECT_TIMEOUT_START;
    // First send a PROTOCOLINFO command to figure out what authentication is expected
    if (!_conn.Command("PROTOCOLINFO 1", boost::bind(&GexController::protocolinfo_cb, this, _1, _2)))
        LogPrintf("gex: Error sending initial protocolinfo command\n");
}

void GexController::disconnected_cb(GexControlConnection& _conn)
{
    // Stop advertising service when disconnected
    if (service.IsValid())
        RemoveLocal(service);
    service = CService();
    if (!reconnect)
        return;

    LogPrint("gex", "gex: Not connected to Gex control port %s, trying to reconnect\n", target);

    // Single-shot timer for reconnect. Use exponential backoff.
    struct timeval time = MillisToTimeval(int64_t(reconnect_timeout * 1000.0));
    if (reconnect_ev)
        event_add(reconnect_ev, &time);
    reconnect_timeout *= RECONNECT_TIMEOUT_EXP;
}

void GexController::Reconnect()
{
    /* Try to reconnect and reestablish if we get booted - for example, Gex
     * may be restarting.
     */
    if (!conn.Connect(target, boost::bind(&GexController::connected_cb, this, _1),
         boost::bind(&GexController::disconnected_cb, this, _1) )) {
        LogPrintf("gex: Re-initiating connection to Gex control port %s failed\n", target);
    }
}

std::string GexController::GetPrivateKeyFile()
{
    return (GetDataDir() / "onion_private_key").string();
}

void GexController::reconnect_cb(evutil_socket_t fd, short what, void *arg)
{
    GexController *self = (GexController*)arg;
    self->Reconnect();
}

/****** Thread ********/
static struct event_base *gBase;
static boost::thread gexControlThread;

static void GexControlThread()
{
    GexController ctrl(gBase, GetArg("-gexcontrol", DEFAULT_GEX_CONTROL));

    event_base_dispatch(gBase);
}

void StartGexControl(boost::thread_group& threadGroup/*, CScheduler& scheduler*/)
{
    assert(!gBase);
#ifdef WIN32
    evthread_use_windows_threads();
#else
    evthread_use_pthreads();
#endif
    gBase = event_base_new();
    if (!gBase) {
        LogPrintf("gex: Unable to create event_base\n");
        return;
    }

    gexControlThread = boost::thread(boost::bind(&TraceThread<void (*)()>, "gexcontrol", &GexControlThread));
}

void InterruptGexControl()
{
    if (gBase) {
        LogPrintf("gex: Thread interrupt\n");
        event_base_loopbreak(gBase);
    }
}

void StopGexControl()
{
    // timed_join() avoids the wallet not closing during a repair-restart. For a 'normal' wallet exit
    // it behaves for our cases exactly like the normal join()
    if (gBase) {
#if BOOST_VERSION >= 105000
        gexControlThread.try_join_for(boost::chrono::seconds(1));
#else
        gexControlThread.timed_join(boost::posix_time::seconds(1));
#endif
        event_base_free(gBase);
        gBase = 0;
    }
}
