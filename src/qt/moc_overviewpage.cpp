/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[25];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "index"
QT_MOC_LITERAL(4, 39, 15), // "addTokenClicked"
QT_MOC_LITERAL(5, 55, 14), // "toAddTokenPage"
QT_MOC_LITERAL(6, 70, 14), // "darksendStatus"
QT_MOC_LITERAL(7, 85, 10), // "setBalance"
QT_MOC_LITERAL(8, 96, 7), // "CAmount"
QT_MOC_LITERAL(9, 104, 7), // "balance"
QT_MOC_LITERAL(10, 112, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(11, 131, 15), // "immatureBalance"
QT_MOC_LITERAL(12, 147, 17), // "anonymizedBalance"
QT_MOC_LITERAL(13, 165, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(14, 182, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(15, 201, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(16, 222, 14), // "toggleDarksend"
QT_MOC_LITERAL(17, 237, 12), // "darksendAuto"
QT_MOC_LITERAL(18, 250, 13), // "darksendReset"
QT_MOC_LITERAL(19, 264, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(20, 282, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(21, 307, 12), // "updateAlerts"
QT_MOC_LITERAL(22, 320, 8), // "warnings"
QT_MOC_LITERAL(23, 329, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(24, 351, 13) // "showWatchOnly"

    },
    "OverviewPage\0transactionClicked\0\0index\0"
    "addTokenClicked\0toAddTokenPage\0"
    "darksendStatus\0setBalance\0CAmount\0"
    "balance\0unconfirmedBalance\0immatureBalance\0"
    "anonymizedBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "toggleDarksend\0darksendAuto\0darksendReset\0"
    "updateDisplayUnit\0handleTransactionClicked\0"
    "updateAlerts\0warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   75,    2, 0x0a /* Public */,
       7,    7,   76,    2, 0x0a /* Public */,
      16,    0,   91,    2, 0x08 /* Private */,
      17,    0,   92,    2, 0x08 /* Private */,
      18,    0,   93,    2, 0x08 /* Private */,
      19,    0,   94,    2, 0x08 /* Private */,
      20,    1,   95,    2, 0x08 /* Private */,
      21,    1,   98,    2, 0x08 /* Private */,
      23,    1,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Bool,   24,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->addTokenClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->darksendStatus(); break;
        case 3: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7]))); break;
        case 4: _t->toggleDarksend(); break;
        case 5: _t->darksendAuto(); break;
        case 6: _t->darksendReset(); break;
        case 7: _t->updateDisplayUnit(); break;
        case 8: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverviewPage::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OverviewPage::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverviewPage::addTokenClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::addTokenClicked(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
