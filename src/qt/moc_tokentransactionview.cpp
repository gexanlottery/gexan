/****************************************************************************
** Meta object code from reading C++ file 'tokentransactionview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/tokentransactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tokentransactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TokenTransactionView_t {
    QByteArrayData data[22];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TokenTransactionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TokenTransactionView_t qt_meta_stringdata_TokenTransactionView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TokenTransactionView"
QT_MOC_LITERAL(1, 21, 14), // "contextualMenu"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "dateRangeChanged"
QT_MOC_LITERAL(4, 54, 11), // "showDetails"
QT_MOC_LITERAL(5, 66, 11), // "copyAddress"
QT_MOC_LITERAL(6, 78, 10), // "copyAmount"
QT_MOC_LITERAL(7, 89, 8), // "copyTxID"
QT_MOC_LITERAL(8, 98, 15), // "copyTxPlainText"
QT_MOC_LITERAL(9, 114, 10), // "chooseDate"
QT_MOC_LITERAL(10, 125, 3), // "idx"
QT_MOC_LITERAL(11, 129, 10), // "chooseType"
QT_MOC_LITERAL(12, 140, 10), // "chooseName"
QT_MOC_LITERAL(13, 151, 13), // "changedPrefix"
QT_MOC_LITERAL(14, 165, 6), // "prefix"
QT_MOC_LITERAL(15, 172, 13), // "changedAmount"
QT_MOC_LITERAL(16, 186, 6), // "amount"
QT_MOC_LITERAL(17, 193, 15), // "addToNameWidget"
QT_MOC_LITERAL(18, 209, 6), // "parent"
QT_MOC_LITERAL(19, 216, 5), // "start"
QT_MOC_LITERAL(20, 222, 20), // "removeFromNameWidget"
QT_MOC_LITERAL(21, 243, 17) // "refreshNameWidget"

    },
    "TokenTransactionView\0contextualMenu\0"
    "\0dateRangeChanged\0showDetails\0copyAddress\0"
    "copyAmount\0copyTxID\0copyTxPlainText\0"
    "chooseDate\0idx\0chooseType\0chooseName\0"
    "changedPrefix\0prefix\0changedAmount\0"
    "amount\0addToNameWidget\0parent\0start\0"
    "removeFromNameWidget\0refreshNameWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TokenTransactionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       3,    0,   92,    2, 0x08 /* Private */,
       4,    0,   93,    2, 0x08 /* Private */,
       5,    0,   94,    2, 0x08 /* Private */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      12,    1,  104,    2, 0x0a /* Public */,
      13,    1,  107,    2, 0x0a /* Public */,
      15,    1,  110,    2, 0x0a /* Public */,
      17,    3,  113,    2, 0x0a /* Public */,
      20,    3,  120,    2, 0x0a /* Public */,
      21,    0,  127,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   18,   19,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   18,   19,    2,
    QMetaType::Void,

       0        // eod
};

void TokenTransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TokenTransactionView *_t = static_cast<TokenTransactionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->dateRangeChanged(); break;
        case 2: _t->showDetails(); break;
        case 3: _t->copyAddress(); break;
        case 4: _t->copyAmount(); break;
        case 5: _t->copyTxID(); break;
        case 6: _t->copyTxPlainText(); break;
        case 7: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->chooseName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->changedAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->addToNameWidget((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->removeFromNameWidget((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->refreshNameWidget(); break;
        default: ;
        }
    }
}

const QMetaObject TokenTransactionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TokenTransactionView.data,
      qt_meta_data_TokenTransactionView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TokenTransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TokenTransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TokenTransactionView.stringdata0))
        return static_cast<void*>(const_cast< TokenTransactionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int TokenTransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
