/****************************************************************************
** Meta object code from reading C++ file 'hexaddressconverter.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/hexaddressconverter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hexaddressconverter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HexAddressConverter_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HexAddressConverter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HexAddressConverter_t qt_meta_stringdata_HexAddressConverter = {
    {
QT_MOC_LITERAL(0, 0, 19), // "HexAddressConverter"
QT_MOC_LITERAL(1, 20, 14), // "addressChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "address"
QT_MOC_LITERAL(4, 44, 17) // "copyButtonClicked"

    },
    "HexAddressConverter\0addressChanged\0\0"
    "address\0copyButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HexAddressConverter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void HexAddressConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HexAddressConverter *_t = static_cast<HexAddressConverter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->copyButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject HexAddressConverter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HexAddressConverter.data,
      qt_meta_data_HexAddressConverter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HexAddressConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HexAddressConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HexAddressConverter.stringdata0))
        return static_cast<void*>(const_cast< HexAddressConverter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HexAddressConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
