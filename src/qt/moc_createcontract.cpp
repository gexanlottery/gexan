/****************************************************************************
** Meta object code from reading C++ file 'createcontract.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/createcontract.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createcontract.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CreateContract_t {
    QByteArrayData data[7];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateContract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateContract_t qt_meta_stringdata_CreateContract = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CreateContract"
QT_MOC_LITERAL(1, 15, 18), // "on_clearAllClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "on_createContractClicked"
QT_MOC_LITERAL(4, 60, 19), // "on_numBlocksChanged"
QT_MOC_LITERAL(5, 80, 21), // "on_updateCreateButton"
QT_MOC_LITERAL(6, 102, 17) // "on_newContractABI"

    },
    "CreateContract\0on_clearAllClicked\0\0"
    "on_createContractClicked\0on_numBlocksChanged\0"
    "on_updateCreateButton\0on_newContractABI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateContract[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CreateContract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateContract *_t = static_cast<CreateContract *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_clearAllClicked(); break;
        case 1: _t->on_createContractClicked(); break;
        case 2: _t->on_numBlocksChanged(); break;
        case 3: _t->on_updateCreateButton(); break;
        case 4: _t->on_newContractABI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CreateContract::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CreateContract.data,
      qt_meta_data_CreateContract,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CreateContract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateContract::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CreateContract.stringdata0))
        return static_cast<void*>(const_cast< CreateContract*>(this));
    return QWidget::qt_metacast(_clname);
}

int CreateContract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
