/****************************************************************************
** Meta object code from reading C++ file 'addtokenpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/addtokenpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtokenpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddTokenPage_t {
    QByteArrayData data[9];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTokenPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTokenPage_t qt_meta_stringdata_AddTokenPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddTokenPage"
QT_MOC_LITERAL(1, 13, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_confirmButton_clicked"
QT_MOC_LITERAL(4, 62, 17), // "on_addressChanged"
QT_MOC_LITERAL(5, 80, 19), // "on_numBlocksChanged"
QT_MOC_LITERAL(6, 100, 22), // "on_updateConfirmButton"
QT_MOC_LITERAL(7, 123, 26), // "on_zeroBalanceAddressToken"
QT_MOC_LITERAL(8, 150, 6) // "enable"

    },
    "AddTokenPage\0on_clearButton_clicked\0"
    "\0on_confirmButton_clicked\0on_addressChanged\0"
    "on_numBlocksChanged\0on_updateConfirmButton\0"
    "on_zeroBalanceAddressToken\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTokenPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void AddTokenPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddTokenPage *_t = static_cast<AddTokenPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_clearButton_clicked(); break;
        case 1: _t->on_confirmButton_clicked(); break;
        case 2: _t->on_addressChanged(); break;
        case 3: _t->on_numBlocksChanged(); break;
        case 4: _t->on_updateConfirmButton(); break;
        case 5: _t->on_zeroBalanceAddressToken((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddTokenPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddTokenPage.data,
      qt_meta_data_AddTokenPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddTokenPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTokenPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddTokenPage.stringdata0))
        return static_cast<void*>(const_cast< AddTokenPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddTokenPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
