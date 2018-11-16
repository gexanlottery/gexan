/****************************************************************************
** Meta object code from reading C++ file 'contractbookpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/contractbookpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contractbookpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ContractBookPage_t {
    QByteArrayData data[17];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContractBookPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContractBookPage_t qt_meta_stringdata_ContractBookPage = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ContractBookPage"
QT_MOC_LITERAL(1, 17, 4), // "done"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "retval"
QT_MOC_LITERAL(4, 30, 29), // "on_deleteContractInfo_clicked"
QT_MOC_LITERAL(5, 60, 26), // "on_newContractInfo_clicked"
QT_MOC_LITERAL(6, 87, 22), // "on_copyAddress_clicked"
QT_MOC_LITERAL(7, 110, 16), // "onCopyNameAction"
QT_MOC_LITERAL(8, 127, 15), // "onCopyABIAction"
QT_MOC_LITERAL(9, 143, 12), // "onEditAction"
QT_MOC_LITERAL(10, 156, 23), // "on_exportButton_clicked"
QT_MOC_LITERAL(11, 180, 16), // "selectionChanged"
QT_MOC_LITERAL(12, 197, 14), // "contextualMenu"
QT_MOC_LITERAL(13, 212, 5), // "point"
QT_MOC_LITERAL(14, 218, 21), // "selectNewContractInfo"
QT_MOC_LITERAL(15, 240, 6), // "parent"
QT_MOC_LITERAL(16, 247, 5) // "begin"

    },
    "ContractBookPage\0done\0\0retval\0"
    "on_deleteContractInfo_clicked\0"
    "on_newContractInfo_clicked\0"
    "on_copyAddress_clicked\0onCopyNameAction\0"
    "onCopyABIAction\0onEditAction\0"
    "on_exportButton_clicked\0selectionChanged\0"
    "contextualMenu\0point\0selectNewContractInfo\0"
    "parent\0begin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContractBookPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      14,    3,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   15,   16,    2,

       0        // eod
};

void ContractBookPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContractBookPage *_t = static_cast<ContractBookPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_deleteContractInfo_clicked(); break;
        case 2: _t->on_newContractInfo_clicked(); break;
        case 3: _t->on_copyAddress_clicked(); break;
        case 4: _t->onCopyNameAction(); break;
        case 5: _t->onCopyABIAction(); break;
        case 6: _t->onEditAction(); break;
        case 7: _t->on_exportButton_clicked(); break;
        case 8: _t->selectionChanged(); break;
        case 9: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->selectNewContractInfo((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject ContractBookPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ContractBookPage.data,
      qt_meta_data_ContractBookPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContractBookPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContractBookPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContractBookPage.stringdata0))
        return static_cast<void*>(const_cast< ContractBookPage*>(this));
    return QDialog::qt_metacast(_clname);
}

int ContractBookPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
