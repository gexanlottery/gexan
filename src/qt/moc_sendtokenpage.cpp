/****************************************************************************
** Meta object code from reading C++ file 'sendtokenpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/sendtokenpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendtokenpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendTokenPage_t {
    QByteArrayData data[6];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendTokenPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendTokenPage_t qt_meta_stringdata_SendTokenPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SendTokenPage"
QT_MOC_LITERAL(1, 14, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "on_numBlocksChanged"
QT_MOC_LITERAL(4, 58, 22), // "on_updateConfirmButton"
QT_MOC_LITERAL(5, 81, 17) // "on_confirmClicked"

    },
    "SendTokenPage\0on_clearButton_clicked\0"
    "\0on_numBlocksChanged\0on_updateConfirmButton\0"
    "on_confirmClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendTokenPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendTokenPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendTokenPage *_t = static_cast<SendTokenPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_clearButton_clicked(); break;
        case 1: _t->on_numBlocksChanged(); break;
        case 2: _t->on_updateConfirmButton(); break;
        case 3: _t->on_confirmClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SendTokenPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SendTokenPage.data,
      qt_meta_data_SendTokenPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendTokenPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendTokenPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendTokenPage.stringdata0))
        return static_cast<void*>(const_cast< SendTokenPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SendTokenPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
