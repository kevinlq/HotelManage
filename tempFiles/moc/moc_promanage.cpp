/****************************************************************************
** Meta object code from reading C++ file 'promanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Src/promanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'promanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProManage_t {
    QByteArrayData data[8];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProManage_t qt_meta_stringdata_ProManage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ProManage"
QT_MOC_LITERAL(1, 10, 12), // "showtimeslot"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "showCurrentRoomNo"
QT_MOC_LITERAL(4, 42, 29), // "on_comboBoxRoomType_activated"
QT_MOC_LITERAL(5, 72, 4), // "arg1"
QT_MOC_LITERAL(6, 77, 30), // "on_comboBoxRoomfloor_activated"
QT_MOC_LITERAL(7, 108, 31) // "on_comboBoxRoomStatus_activated"

    },
    "ProManage\0showtimeslot\0\0showCurrentRoomNo\0"
    "on_comboBoxRoomType_activated\0arg1\0"
    "on_comboBoxRoomfloor_activated\0"
    "on_comboBoxRoomStatus_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProManage[] = {

 // content:
       8,       // revision
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
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       7,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void ProManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProManage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showtimeslot(); break;
        case 1: _t->showCurrentRoomNo(); break;
        case 2: _t->on_comboBoxRoomType_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBoxRoomfloor_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBoxRoomStatus_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProManage::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ProManage.data,
    qt_meta_data_ProManage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProManage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
