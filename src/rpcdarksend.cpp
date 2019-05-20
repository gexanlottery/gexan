// Copyright (c) 2012-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2018 The Luxcore developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "main.h"
#include "primitives/transaction.h"
#include "db.h"
#include "init.h"
#include "masternode.h"
#include "activemasternode.h"
#include "masternodeconfig.h"
#include "rpcserver.h"
#include <boost/lexical_cast.hpp>
//#include "amount.h"
#include "util.h"
#include "utilmoneystr.h"

#include <boost/tokenizer.hpp>

#include "univalue/univalue.h"

#include <fstream>

void SendMoney(const CTxDestination& address, CAmount nValue, CWalletTx& wtxNew, AvailableCoinsType coin_type) {
    // Check amount
    if (nValue <= 0)
        throw JSONRPCError(RPC_INVALID_PARAMETER, "Invalid amount");

    if (nValue > pwalletMain->GetBalance())
        throw JSONRPCError(RPC_WALLET_INSUFFICIENT_FUNDS, "Insufficient funds");

    string strError;
    if (pwalletMain->IsLocked()) {
        strError = "Error: Wallet locked, unable to create transaction!";
        LogPrintf("SendMoney() : %s", strError);
        throw JSONRPCError(RPC_WALLET_ERROR, strError);
    }

    // Parse Gex address
    CScript scriptPubKey = GetScriptForDestination(address);

    // Create and send the transaction
    CReserveKey reservekey(pwalletMain);
    CAmount nFeeRequired;
    std::vector<CRecipient> vecSend;
    CRecipient recipient = {scriptPubKey, nValue, false};
    vecSend.push_back(recipient);
    int nChangePos;
    if (!pwalletMain->CreateTransaction(vecSend, wtxNew, reservekey, nFeeRequired, nChangePos, strError, NULL, coin_type)) {
        if (nValue + nFeeRequired > pwalletMain->GetBalance())
            strError = strprintf("Error: This transaction requires a transaction fee of at least %s because of its amount, complexity, or use of recently received funds!", FormatMoney(nFeeRequired));
        LogPrintf("SendMoney() : %s\n", strError);
        throw JSONRPCError(RPC_WALLET_ERROR, strError);
    }
    if (!pwalletMain->CommitTransaction(wtxNew, reservekey))
        throw JSONRPCError(RPC_WALLET_ERROR,
                           "Error: The transaction was rejected! This might happen if some of the coins in your wallet were already spent, such as if you used a copy of wallet.dat and coins were spent in the copy but not marked as spent here.");
}

UniValue darksend(const UniValue& params, bool fHelp) {
    if (fHelp || params.size() == 0)
        throw runtime_error(
            "darksend <Gexaddress> <amount>\n"
            "Gexaddress, reset, or auto (AutoDenominate)"
            "<amount> is a real and is rounded to the nearest 0.00000001"
            + HelpRequiringPassphrase());

    if (pwalletMain->IsLocked())
        throw JSONRPCError(RPC_WALLET_UNLOCK_NEEDED, "Error: Please enter the wallet passphrase with walletpassphrase first.");

    if (params[0].get_str() == "auto") {
        if (fMasterNode)
            return "DarkSend is not supported from masternodes";

        darkSendPool.DoAutomaticDenominating();
        return "DoAutomaticDenominating";
    }

    if (params[0].get_str() == "reset") {
        darkSendPool.SetNull(true);
        darkSendPool.UnlockCoins();
        return "successfully reset darksend";
    }

    if (params.size() != 2)
        throw runtime_error(
            "darksend <Gexaddress> <amount>\n"
            "Gexaddress, denominate, or auto (AutoDenominate)"
            "<amount> is a real and is rounded to the nearest 0.00000001"
            + HelpRequiringPassphrase());

    CTxDestination dest = DecodeDestination(params[0].get_str());
    if (!IsValidDestination(dest))
        throw JSONRPCError(RPC_INVALID_ADDRESS_OR_KEY, "Invalid Gex address");

    // Amount
    int64_t nAmount = AmountFromValue(params[1]);

    // Wallet comments
    CWalletTx wtx;
    SendMoney(dest, nAmount, wtx, ONLY_DENOMINATED);

    return wtx.GetHash().GetHex();
}


UniValue getpoolinfo(const UniValue& params, bool fHelp) {
    if (fHelp || params.size() != 0)
        throw runtime_error(
            "getpoolinfo\n"
            "Returns an object containing anonymous pool-related information.");

    UniValue obj(UniValue::VOBJ);
    obj.push_back(Pair("current_masternode", GetCurrentMasterNode()));
    obj.push_back(Pair("state", darkSendPool.GetState()));
    obj.push_back(Pair("entries", darkSendPool.GetEntriesCount()));
    obj.push_back(Pair("entries_accepted", darkSendPool.GetCountEntriesAccepted()));
    return obj;
}


UniValue masternode(const UniValue& params, bool fHelp) {
    string strCommand;
    if (params.size() >= 1)
        strCommand = params[0].get_str();

    if (fHelp ||
        (strCommand != "start" && strCommand != "start-alias" && strCommand != "start-many" && strCommand != "stop" && strCommand != "stop-alias" && strCommand != "stop-many" &&
         strCommand != "list" && strCommand != "list-conf" && strCommand != "count" && strCommand != "enforce"
         && strCommand != "debug" && strCommand != "current" && strCommand != "winners" && strCommand != "genkey" && strCommand != "connect" && strCommand != "outputs" && strCommand != "status" ))
        throw runtime_error(
            "masternode <start|start-alias|start-many|stop|stop-alias|stop-many|list|list-conf|count|debug|current|winners|genkey|enforce|outputs|status> [passphrase]\n");

    if (strCommand == "stop") {
        if (!fMasterNode) return "you must set masternode=1 in the configuration";

        if (pwalletMain->IsLocked()) {
            SecureString strWalletPass;
            strWalletPass.reserve(100);

            if (params.size() == 2) {
                strWalletPass = params[1].get_str().c_str();
            } else {
                throw runtime_error(
                    "Your wallet is locked, passphrase is required\n");
            }

            if (!pwalletMain->Unlock(strWalletPass)) {
                return "incorrect passphrase";
            }
        }

        std::string errorMessage;
        if (!activeMasternode.StopMasterNode(errorMessage)) {
            return "stop failed: " + errorMessage;
        }
        pwalletMain->Lock();

        if (activeMasternode.status == MASTERNODE_STOPPED) return "successfully stopped masternode";
        if (activeMasternode.status == MASTERNODE_NOT_CAPABLE) return "not capable masternode";

        return "unknown";
    }

    if (strCommand == "stop-alias") {
        if (params.size() < 2) {
            throw runtime_error(
                "command needs at least 2 parameters\n");
        }

        std::string alias = params[1].get_str().c_str();

        if (pwalletMain->IsLocked()) {
            SecureString strWalletPass;
            strWalletPass.reserve(100);

            if (params.size() == 3) {
                strWalletPass = params[2].get_str().c_str();
            } else {
                throw runtime_error(
                    "Your wallet is locked, passphrase is required\n");
            }

            if (!pwalletMain->Unlock(strWalletPass)) {
                return "incorrect passphrase";
            }
        }

        bool found = false;

        UniValue resultsObj(UniValue::VOBJ);
        resultsObj.push_back(Pair("alias", alias));

        for (CMasternodeConfig::CMasternodeEntry mne : masternodeConfig.getEntries()) {
            if (mne.getAlias() == alias) {
                found = true;
                std::string errorMessage;
                bool result = activeMasternode.StopMasterNode(mne.getIp(), mne.getPrivKey(), errorMessage);

                resultsObj.push_back(Pair("result", result ? "successful" : "failed"));
                if (!result) {
                    resultsObj.push_back(Pair("errorMessage", errorMessage));
                }
                break;
            }
        }

        if (!found) {
            resultsObj.push_back(Pair("result", "failed"));
            resultsObj.push_back(Pair("errorMessage", "could not find alias in config. Verify with list-conf."));
        }

        pwalletMain->Lock();
        return resultsObj;
    }

    if (strCommand == "stop-many") {
        if (pwalletMain->IsLocked()) {
            SecureString strWalletPass;
            strWalletPass.reserve(100);

            if (params.size() == 2) {
                strWalletPass = params[1].get_str().c_str();
            } else {
                throw runtime_error(
                    "Your wallet is locked, passphrase is required\n");
            }

            if (!pwalletMain->Unlock(strWalletPass)) {
                return "incorrect passphrase";
            }
        }

        int total = 0;
        int successful = 0;
        int fail = 0;

        UniValue resultsObj(UniValue::VOBJ);

        for (CMasternodeConfig::CMasternodeEntry mne : masternodeConfig.getEntries()) {
            total++;

            std::string errorMessage;
            bool result = activeMasternode.StopMasterNode(mne.getIp(), mne.getPrivKey(), errorMessage);

            UniValue statusObj(UniValue::VOBJ);
            statusObj.push_back(Pair("alias", mne.getAlias()));
            statusObj.push_back(Pair("result", result ? "successful" : "failed"));

            if (result) {
                successful++;
            } else {
                fail++;
                statusObj.push_back(Pair("errorMessage", errorMessage));
            }

            resultsObj.push_back(Pair("status", statusObj));
        }
        pwalletMain->Lock();

        UniValue returnObj(UniValue::VOBJ);
        returnObj.push_back(Pair("overall", "Successfully stopped " + boost::lexical_cast<std::string>(successful) + " masternodes, failed to stop " +
                                            boost::lexical_cast<std::string>(fail) + ", total " + boost::lexical_cast<std::string>(total)));
        returnObj.push_back(Pair("detail", resultsObj));

        return returnObj;

    }

    if (strCommand == "list") {
        std::string strCommand = "pivx";

        if (params.size() == 2) {
            strCommand = params[1].get_str().c_str();
        }

        if (strCommand != "active" && strCommand != "vin" && strCommand != "pubkey" && strCommand != "lastseen" && strCommand != "activeseconds" && strCommand != "rank" && strCommand != "protocol" && strCommand != "full" && strCommand != "pivx" ) {
            throw runtime_error(
                "list supports 'active', 'vin', 'pubkey', 'lastseen', 'activeseconds', 'rank', 'protocol', 'full', 'pivx'\n");
        }

        UniValue obj(UniValue::VOBJ);
        UniValue ret(UniValue::VARR);
        for (CMasterNode mn : vecMasternodes) {
            mn.Check();
            CScript pubkey;
            pubkey = GetScriptForDestination(mn.pubkey.GetID());
            CTxDestination address1;
            ExtractDestination(pubkey, address1);
            CTxDestination address2(address1);

            if(strCommand == "pivx")
            {
                UniValue obj(UniValue::VOBJ);
                obj.push_back(Pair("rank",  (int) (GetMasternodeRank(mn.vin, chainActive.Height()))));
                obj.push_back(Pair("network", "ipv4")); // SpiderCore support ipv4 only
                obj.push_back(Pair("txhash",  mn.vin.prevout.hash.ToString()));
                obj.push_back(Pair("outidx", (uint64_t) mn.vin.prevout.n));
                obj.push_back(Pair("status", mn.IsEnabled() == true ? "ENABLED" : "MISSING"));
                obj.push_back(Pair("addr", EncodeDestination(address2)));
                obj.push_back(Pair("version", (int64_t) mn.protocolVersion));
                obj.push_back(Pair("lastseen", (int64_t) mn.lastTimeSeen));
                obj.push_back(Pair("activetime", (int64_t)(mn.lastTimeSeen - mn.now)));
                obj.push_back(Pair("lastpaid", "0"));
                ret.push_back(obj);
            }
            if(strCommand == "full")
            {
                
                UniValue mn_full(UniValue::VOBJ);
                mn_full.push_back(Pair("ip",mn.addr.ToString().c_str()));
                mn_full.push_back(Pair("status", mn.IsEnabled() == true ? "ENABLED" : "MISSING"));
                mn_full.push_back(Pair("address",EncodeDestination(address2)));
                mn_full.push_back(Pair("lastseen",(int64_t) mn.lastTimeSeen));
                mn_full.push_back(Pair("rank",(int) (GetMasternodeRank(mn.vin, chainActive.Height()))));
                ret.push_back(mn_full);

            }

            if (strCommand == "active") {
                obj.push_back(Pair(mn.addr.ToString().c_str(), (int) mn.IsEnabled()));
            } else if (strCommand == "vin") {
                obj.push_back(Pair(mn.addr.ToString().c_str(), mn.vin.prevout.hash.ToString().c_str()));
            } else if (strCommand == "pubkey") {


                obj.push_back(Pair(mn.addr.ToString().c_str(), EncodeDestination(address2)));
            } else if (strCommand == "protocol") {
                obj.push_back(Pair(mn.addr.ToString().c_str(), (int64_t) mn.protocolVersion));
            } else if (strCommand == "lastseen") {
                obj.push_back(Pair(mn.addr.ToString().c_str(), (int64_t) mn.lastTimeSeen));
            } else if (strCommand == "activeseconds") {
                obj.push_back(Pair(mn.addr.ToString().c_str(), (int64_t)(mn.lastTimeSeen - mn.now)));
            } else if (strCommand == "rank") {
                obj.push_back(Pair(mn.addr.ToString().c_str(), (int) (GetMasternodeRank(mn.vin, chainActive.Height()))));
            }
        }
        if(strCommand == "full" || strCommand == "pivx")
            return ret;
        return obj;  
    }
    if (strCommand == "count")
    {
        std::string strCommand = "active";
        int active_mn = 0;
        if (params.size() == 2) {
            strCommand = params[1].get_str().c_str();
        }
        if(strCommand == "active"){
            for (CMasterNode mn : vecMasternodes) {
                mn.Check();
                if(mn.IsEnabled())
                    active_mn++;
            }
            return active_mn;
        }    
        return (int) vecMasternodes.size();
    }

    if (strCommand == "start") {
        if (!fMasterNode) return "you must set masternode=1 in the configuration";

        if (pwalletMain->IsLocked()) {
            SecureString strWalletPass;
            strWalletPass.reserve(100);

            if (params.size() == 2) {
                strWalletPass = params[1].get_str().c_str();
            } else {
                throw runtime_error(
                    "Your wallet is locked, passphrase is required\n");
            }

            if (!pwalletMain->Unlock(strWalletPass)) {
                return "incorrect passphrase";
            }
        }

        if (activeMasternode.status != MASTERNODE_REMOTELY_ENABLED && activeMasternode.status != MASTERNODE_IS_CAPABLE) {
            activeMasternode.status = MASTERNODE_NOT_PROCESSED; // TODO: consider better way
            std::string errorMessage;
            activeMasternode.ManageStatus();
            pwalletMain->Lock();
        }

        if (activeMasternode.status == MASTERNODE_REMOTELY_ENABLED) return "masternode started remotely";
        if (activeMasternode.status == MASTERNODE_INPUT_TOO_NEW) return "masternode input must have at least 15 confirmations";
        if (activeMasternode.status == MASTERNODE_STOPPED) return "masternode is stopped";
        if (activeMasternode.status == MASTERNODE_IS_CAPABLE) return "successfully started masternode";
        if (activeMasternode.status == MASTERNODE_NOT_CAPABLE) return "not capable masternode: " + activeMasternode.notCapableReason;
        if (activeMasternode.status == MASTERNODE_SYNC_IN_PROCESS) return "sync in process. Must wait until client is synced to start.";

        return "unknown";
    }

    if (strCommand == "start-alias") {
        if (params.size() < 2) {
            throw runtime_error(
                "command needs at least 2 parameters\n");
        }

        std::string alias = params[1].get_str().c_str();

        if (pwalletMain->IsLocked()) {
            SecureString strWalletPass;
            strWalletPass.reserve(100);

            if (params.size() == 3) {
                strWalletPass = params[2].get_str().c_str();
            } else {
                throw runtime_error(
                    "Your wallet is locked, passphrase is required\n");
            }

            if (!pwalletMain->Unlock(strWalletPass)) {
                return "incorrect passphrase";
            }
        }

        bool found = false;

        UniValue statusObj(UniValue::VOBJ);

        statusObj.push_back(Pair("alias", alias));

        for (CMasternodeConfig::CMasternodeEntry mne : masternodeConfig.getEntries()) {
            if (mne.getAlias() == alias) {
                found = true;
                std::string errorMessage;
                bool result = activeMasternode.Register(mne.getIp(), mne.getPrivKey(), mne.getTxHash(), mne.getOutputIndex(), errorMessage);

                statusObj.push_back(Pair("result", result ? "successful" : "failed"));
                if (!result) {
                    statusObj.push_back(Pair("errorMessage", errorMessage));
                }
                break;
            }
        }

        if (!found) {
            statusObj.push_back(Pair("result", "failed"));
            statusObj.push_back(Pair("errorMessage", "could not find alias in config. Verify with list-conf."));
        }

        pwalletMain->Lock();
        return statusObj;

    }

    if (strCommand == "start-many") {
        if (pwalletMain->IsLocked()) {
            SecureString strWalletPass;
            strWalletPass.reserve(100);

            if (params.size() == 2) {
                strWalletPass = params[1].get_str().c_str();
            } else {
                throw runtime_error(
                    "Your wallet is locked, passphrase is required\n");
            }

            if (!pwalletMain->Unlock(strWalletPass)) {
                return "incorrect passphrase";
            }
        }

        std::vector<CMasternodeConfig::CMasternodeEntry> mnEntries;
        mnEntries = masternodeConfig.getEntries();

        int total = 0;
        int successful = 0;
        int fail = 0;

        UniValue resultsObj(UniValue::VOBJ);

        for (CMasternodeConfig::CMasternodeEntry mne : masternodeConfig.getEntries()) {
            total++;

            std::string errorMessage;
            bool result = activeMasternode.Register(mne.getIp(), mne.getPrivKey(), mne.getTxHash(), mne.getOutputIndex(), errorMessage);

            UniValue statusObj(UniValue::VOBJ);
            statusObj.push_back(Pair("alias", mne.getAlias()));
            statusObj.push_back(Pair("result", result ? "succesful" : "failed"));

            if (result) {
                successful++;
            } else {
                fail++;
                statusObj.push_back(Pair("errorMessage", errorMessage));
            }

            resultsObj.push_back(Pair("status", statusObj));
        }
        pwalletMain->Lock();

        UniValue returnObj(UniValue::VOBJ);
        returnObj.push_back(Pair("overall", "Successfully started " + boost::lexical_cast<std::string>(successful) + " masternodes, failed to start " +
                                            boost::lexical_cast<std::string>(fail) + ", total " + boost::lexical_cast<std::string>(total)));
        returnObj.push_back(Pair("detail", resultsObj));

        return returnObj;
    }

    if (strCommand == "debug") {
        if (activeMasternode.status == MASTERNODE_REMOTELY_ENABLED) return "masternode started remotely";
        if (activeMasternode.status == MASTERNODE_INPUT_TOO_NEW) return "masternode input must have at least 15 confirmations";
        if (activeMasternode.status == MASTERNODE_IS_CAPABLE) return "successfully started masternode";
        if (activeMasternode.status == MASTERNODE_STOPPED) return "masternode is stopped";
        if (activeMasternode.status == MASTERNODE_NOT_CAPABLE) return "not capable masternode: " + activeMasternode.notCapableReason;
        if (activeMasternode.status == MASTERNODE_SYNC_IN_PROCESS) return "sync in process. Must wait until client is synced to start.";

        CTxIn vin = CTxIn();
        CPubKey pubkey;
        CKey key;
        bool found = activeMasternode.GetMasterNodeVin(vin, pubkey, key);
        if (!found) {
            return "Missing masternode input, please look at the documentation for instructions on masternode creation";
        } else {
            return "No problems were found";
        }
    }

    if (strCommand == "outputs"){
        // Find possible candidates
        vector<COutput> possibleCoins = activeMasternode.SelectCoinsMasternode();

        UniValue obj(UniValue::VOBJ);
        for (const auto& out : possibleCoins) {
            obj.push_back(Pair(out.tx->GetHash().ToString().c_str(), boost::lexical_cast<std::string>(out.i)));
        }
        return obj;
    }

    if (strCommand == "create") {

        return "Not implemented yet, please look at the documentation for instructions on masternode creation";
    }

    if (strCommand == "current") {
        int winner = GetCurrentMasterNode(1);
        if (winner >= 0) {
            return vecMasternodes[winner].addr.ToString().c_str();
        }

        return "unknown";
    }

    if (strCommand == "genkey") {
        CKey secret;
        secret.MakeNewKey(false);

        return CBitcoinSecret(secret).ToString();
    }

    if (strCommand == "winners") {
        UniValue obj(UniValue::VOBJ);

        for (int nHeight = chainActive.Height() - 10; nHeight < chainActive.Height() + 20; nHeight++) {
            CScript payee;
            if (masternodePayments.GetBlockPayee(nHeight, payee)) {
                CTxDestination address1;
                ExtractDestination(payee, address1);
                CTxDestination address2(address1);
                obj.push_back(Pair(boost::lexical_cast<std::string>(nHeight), EncodeDestination(address2)));
            } else {
                obj.push_back(Pair(boost::lexical_cast<std::string>(nHeight), ""));
            }
        }

        return obj;
    }

    if (strCommand == "enforce") {
        return (uint64_t) enforceMasternodePaymentsTime;
    }

    if (strCommand == "connect") {
        std::string strAddress = "";
        if (params.size() == 2) {
            strAddress = params[1].get_str().c_str();
        } else {
            throw runtime_error(
                "Masternode address required\n");
        }

        CService addr = CService(strAddress);

        if (ConnectNode(CAddress(addr, NODE_NETWORK), NULL, true)) {
            return "successfully connected";
        } else {
            return "error connecting";
        }
    }

    if (strCommand == "list-conf") {


        UniValue resultObj(UniValue::VOBJ);

        for (CMasternodeConfig::CMasternodeEntry mne : masternodeConfig.getEntries()) {
            UniValue mnObj(UniValue::VOBJ);
            mnObj.push_back(Pair("alias", mne.getAlias()));
            mnObj.push_back(Pair("address", mne.getIp()));
            mnObj.push_back(Pair("privateKey", mne.getPrivKey()));
            mnObj.push_back(Pair("txHash", mne.getTxHash()));
            mnObj.push_back(Pair("outputIndex", mne.getOutputIndex()));
            int nIndex = 0;
            nIndex = std::stoi(mne.getOutputIndex());  
            CTxIn vin = CTxIn(uint256(mne.getTxHash()), uint32_t(nIndex));
            int mnIndex = GetMasternodeByVin(vin);
            if (mnIndex != -1) 
                mnObj.push_back(Pair("status", vecMasternodes[mnIndex].IsEnabled() == true ? "ENABLED" : "MISSING"));
            else
                mnObj.push_back(Pair("status", "MISSING"));

            resultObj.push_back(Pair("masternode", mnObj));
        }

        return resultObj;
    }
    if (strCommand == "status") {
        if (!fMasterNode) throw runtime_error("This is not a masternode");
        int mnIndex = GetMasternodeByVin(activeMasternode.vin);
        if(mnIndex != -1)
        {
            CMasterNode mn = vecMasternodes[mnIndex];
            UniValue mnObj(UniValue::VOBJ);
            mnObj.push_back(Pair("txhash", activeMasternode.vin.prevout.hash.ToString()));
            mnObj.push_back(Pair("outputidx", (uint64_t)activeMasternode.vin.prevout.n));
            mnObj.push_back(Pair("netaddr", activeMasternode.service.ToString()));
	        CScript pubkey;
            pubkey = GetScriptForDestination(mn.pubkey.GetID());
            CTxDestination address1;
            ExtractDestination(pubkey, address1);
            mnObj.push_back(Pair("addr", EncodeDestination(address1)));
            mnObj.push_back(Pair("status", activeMasternode.status));
            mnObj.push_back(Pair("message", activeMasternode.GetStatus()));
            return mnObj;
        }
        throw runtime_error("Masternode not found in the list of available masternodes. Current status: "
                        + activeMasternode.GetStatus()); 
        

    }
    if (strCommand == "outputs") {
        // Find possible candidates
        vector<COutput> possibleCoins = activeMasternode.SelectCoinsMasternode();

        UniValue obj(UniValue::VOBJ);
        for (COutput& out : possibleCoins) {
            obj.push_back(Pair(out.tx->GetHash().ToString().c_str(), boost::lexical_cast<std::string>(out.i)));
        }

        return obj;

    }

    return NullUniValue;
}

