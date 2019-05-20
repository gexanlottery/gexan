/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[71];
    char stringdata0[982];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 36, 7), // "command"
QT_MOC_LITERAL(5, 44, 13), // "handleRestart"
QT_MOC_LITERAL(6, 58, 4), // "args"
QT_MOC_LITERAL(7, 63, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(8, 89, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(9, 117, 5), // "index"
QT_MOC_LITERAL(10, 123, 36), // "on_switchNetworkActiveButton_..."
QT_MOC_LITERAL(11, 160, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(12, 194, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(13, 224, 5), // "value"
QT_MOC_LITERAL(14, 230, 18), // "updateTrafficStats"
QT_MOC_LITERAL(15, 249, 12), // "totalBytesIn"
QT_MOC_LITERAL(16, 262, 13), // "totalBytesOut"
QT_MOC_LITERAL(17, 276, 11), // "resizeEvent"
QT_MOC_LITERAL(18, 288, 13), // "QResizeEvent*"
QT_MOC_LITERAL(19, 302, 5), // "event"
QT_MOC_LITERAL(20, 308, 9), // "showEvent"
QT_MOC_LITERAL(21, 318, 11), // "QShowEvent*"
QT_MOC_LITERAL(22, 330, 9), // "hideEvent"
QT_MOC_LITERAL(23, 340, 11), // "QHideEvent*"
QT_MOC_LITERAL(24, 352, 25), // "showPeersTableContextMenu"
QT_MOC_LITERAL(25, 378, 5), // "point"
QT_MOC_LITERAL(26, 384, 23), // "showBanTableContextMenu"
QT_MOC_LITERAL(27, 408, 28), // "showOrHideBanTableIfRequired"
QT_MOC_LITERAL(28, 437, 17), // "clearSelectedNode"
QT_MOC_LITERAL(29, 455, 5), // "clear"
QT_MOC_LITERAL(30, 461, 10), // "fontBigger"
QT_MOC_LITERAL(31, 472, 11), // "fontSmaller"
QT_MOC_LITERAL(32, 484, 11), // "setFontSize"
QT_MOC_LITERAL(33, 496, 7), // "newSize"
QT_MOC_LITERAL(34, 504, 13), // "walletSalvage"
QT_MOC_LITERAL(35, 518, 12), // "walletRescan"
QT_MOC_LITERAL(36, 531, 14), // "walletZaptxes1"
QT_MOC_LITERAL(37, 546, 14), // "walletZaptxes2"
QT_MOC_LITERAL(38, 561, 13), // "walletUpgrade"
QT_MOC_LITERAL(39, 575, 13), // "walletReindex"
QT_MOC_LITERAL(40, 589, 6), // "reject"
QT_MOC_LITERAL(41, 596, 7), // "message"
QT_MOC_LITERAL(42, 604, 8), // "category"
QT_MOC_LITERAL(43, 613, 4), // "html"
QT_MOC_LITERAL(44, 618, 17), // "setNumConnections"
QT_MOC_LITERAL(45, 636, 5), // "count"
QT_MOC_LITERAL(46, 642, 16), // "setNetworkActive"
QT_MOC_LITERAL(47, 659, 13), // "networkActive"
QT_MOC_LITERAL(48, 673, 12), // "setNumBlocks"
QT_MOC_LITERAL(49, 686, 18), // "setMasternodeCount"
QT_MOC_LITERAL(50, 705, 14), // "strMasternodes"
QT_MOC_LITERAL(51, 720, 13), // "browseHistory"
QT_MOC_LITERAL(52, 734, 6), // "offset"
QT_MOC_LITERAL(53, 741, 11), // "scrollToEnd"
QT_MOC_LITERAL(54, 753, 8), // "showInfo"
QT_MOC_LITERAL(55, 762, 11), // "showConsole"
QT_MOC_LITERAL(56, 774, 11), // "showNetwork"
QT_MOC_LITERAL(57, 786, 9), // "showPeers"
QT_MOC_LITERAL(58, 796, 10), // "showRepair"
QT_MOC_LITERAL(59, 807, 14), // "showConfEditor"
QT_MOC_LITERAL(60, 822, 16), // "showMNConfEditor"
QT_MOC_LITERAL(61, 839, 12), // "peerSelected"
QT_MOC_LITERAL(62, 852, 14), // "QItemSelection"
QT_MOC_LITERAL(63, 867, 8), // "selected"
QT_MOC_LITERAL(64, 876, 10), // "deselected"
QT_MOC_LITERAL(65, 887, 17), // "peerLayoutChanged"
QT_MOC_LITERAL(66, 905, 22), // "disconnectSelectedNode"
QT_MOC_LITERAL(67, 928, 15), // "banSelectedNode"
QT_MOC_LITERAL(68, 944, 7), // "bantime"
QT_MOC_LITERAL(69, 952, 17), // "unbanSelectedNode"
QT_MOC_LITERAL(70, 970, 11) // "showBackups"

    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0handleRestart\0args\0"
    "on_lineEdit_returnPressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_switchNetworkActiveButton_clicked\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0resizeEvent\0QResizeEvent*\0"
    "event\0showEvent\0QShowEvent*\0hideEvent\0"
    "QHideEvent*\0showPeersTableContextMenu\0"
    "point\0showBanTableContextMenu\0"
    "showOrHideBanTableIfRequired\0"
    "clearSelectedNode\0clear\0fontBigger\0"
    "fontSmaller\0setFontSize\0newSize\0"
    "walletSalvage\0walletRescan\0walletZaptxes1\0"
    "walletZaptxes2\0walletUpgrade\0walletReindex\0"
    "reject\0message\0category\0html\0"
    "setNumConnections\0count\0setNetworkActive\0"
    "networkActive\0setNumBlocks\0"
    "setMasternodeCount\0strMasternodes\0"
    "browseHistory\0offset\0scrollToEnd\0"
    "showInfo\0showConsole\0showNetwork\0"
    "showPeers\0showRepair\0showConfEditor\0"
    "showMNConfEditor\0peerSelected\0"
    "QItemSelection\0selected\0deselected\0"
    "peerLayoutChanged\0disconnectSelectedNode\0"
    "banSelectedNode\0bantime\0unbanSelectedNode\0"
    "showBackups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  254,    2, 0x06 /* Public */,
       3,    1,  255,    2, 0x06 /* Public */,
       5,    1,  258,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  261,    2, 0x08 /* Private */,
       8,    1,  262,    2, 0x08 /* Private */,
      10,    0,  265,    2, 0x08 /* Private */,
      11,    0,  266,    2, 0x08 /* Private */,
      12,    1,  267,    2, 0x08 /* Private */,
      14,    2,  270,    2, 0x08 /* Private */,
      17,    1,  275,    2, 0x08 /* Private */,
      20,    1,  278,    2, 0x08 /* Private */,
      22,    1,  281,    2, 0x08 /* Private */,
      24,    1,  284,    2, 0x08 /* Private */,
      26,    1,  287,    2, 0x08 /* Private */,
      27,    0,  290,    2, 0x08 /* Private */,
      28,    0,  291,    2, 0x08 /* Private */,
      29,    0,  292,    2, 0x0a /* Public */,
      30,    0,  293,    2, 0x0a /* Public */,
      31,    0,  294,    2, 0x0a /* Public */,
      32,    1,  295,    2, 0x0a /* Public */,
      34,    0,  298,    2, 0x0a /* Public */,
      35,    0,  299,    2, 0x0a /* Public */,
      36,    0,  300,    2, 0x0a /* Public */,
      37,    0,  301,    2, 0x0a /* Public */,
      38,    0,  302,    2, 0x0a /* Public */,
      39,    0,  303,    2, 0x0a /* Public */,
      40,    0,  304,    2, 0x0a /* Public */,
      41,    3,  305,    2, 0x0a /* Public */,
      41,    2,  312,    2, 0x2a /* Public | MethodCloned */,
      44,    1,  317,    2, 0x0a /* Public */,
      46,    1,  320,    2, 0x0a /* Public */,
      48,    1,  323,    2, 0x0a /* Public */,
      49,    1,  326,    2, 0x0a /* Public */,
      51,    1,  329,    2, 0x0a /* Public */,
      53,    0,  332,    2, 0x0a /* Public */,
      54,    0,  333,    2, 0x0a /* Public */,
      55,    0,  334,    2, 0x0a /* Public */,
      56,    0,  335,    2, 0x0a /* Public */,
      57,    0,  336,    2, 0x0a /* Public */,
      58,    0,  337,    2, 0x0a /* Public */,
      59,    0,  338,    2, 0x0a /* Public */,
      60,    0,  339,    2, 0x0a /* Public */,
      61,    2,  340,    2, 0x0a /* Public */,
      65,    0,  345,    2, 0x0a /* Public */,
      66,    0,  346,    2, 0x0a /* Public */,
      67,    1,  347,    2, 0x0a /* Public */,
      69,    0,  350,    2, 0x0a /* Public */,
      70,    0,  351,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   19,
    QMetaType::Void, 0x80000000 | 23,   19,
    QMetaType::Void, QMetaType::QPoint,   25,
    QMetaType::Void, QMetaType::QPoint,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   42,   41,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   42,   41,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62, 0x80000000 | 62,   63,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_returnPressed(); break;
        case 4: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_switchNetworkActiveButton_clicked(); break;
        case 6: _t->on_openDebugLogfileButton_clicked(); break;
        case 7: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 9: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 10: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 11: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 12: _t->showPeersTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->showBanTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->showOrHideBanTableIfRequired(); break;
        case 15: _t->clearSelectedNode(); break;
        case 16: _t->clear(); break;
        case 17: _t->fontBigger(); break;
        case 18: _t->fontSmaller(); break;
        case 19: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->walletSalvage(); break;
        case 21: _t->walletRescan(); break;
        case 22: _t->walletZaptxes1(); break;
        case 23: _t->walletZaptxes2(); break;
        case 24: _t->walletUpgrade(); break;
        case 25: _t->walletReindex(); break;
        case 26: _t->reject(); break;
        case 27: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 28: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setMasternodeCount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->scrollToEnd(); break;
        case 35: _t->showInfo(); break;
        case 36: _t->showConsole(); break;
        case 37: _t->showNetwork(); break;
        case 38: _t->showPeers(); break;
        case 39: _t->showRepair(); break;
        case 40: _t->showConfEditor(); break;
        case 41: _t->showMNConfEditor(); break;
        case 42: _t->peerSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 43: _t->peerLayoutChanged(); break;
        case 44: _t->disconnectSelectedNode(); break;
        case 45: _t->banSelectedNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->unbanSelectedNode(); break;
        case 47: _t->showBackups(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RPCConsole::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::handleRestart)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RPCConsole::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QDialog::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RPCConsole::handleRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
