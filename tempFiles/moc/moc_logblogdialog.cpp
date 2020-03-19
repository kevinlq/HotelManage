/****************************************************************************
** Meta object code from reading C++ file 'logblogdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Src/logblogdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logblogdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogBlogDialog_t {
    QByteArrayData data[9];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogBlogDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogBlogDialog_t qt_meta_stringdata_LogBlogDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogBlogDialog"
QT_MOC_LITERAL(1, 14, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 19), // "on_btnPrint_clicked"
QT_MOC_LITERAL(4, 56, 24), // "on_ckTriggerTime_clicked"
QT_MOC_LITERAL(5, 81, 7), // "checked"
QT_MOC_LITERAL(6, 89, 24), // "on_ckTriggerType_clicked"
QT_MOC_LITERAL(7, 114, 21), // "on_ckUserName_clicked"
QT_MOC_LITERAL(8, 136, 20) // "on_btnDelete_clicked"

    },
    "LogBlogDialog\0on_btnSelect_clicked\0\0"
    "on_btnPrint_clicked\0on_ckTriggerTime_clicked\0"
    "checked\0on_ckTriggerType_clicked\0"
    "on_ckUserName_clicked\0on_btnDelete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogBlogDialog[] = {

 // content:
       8,       // revision
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
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void LogBlogDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogBlogDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSelect_clicked(); break;
        case 1: _t->on_btnPrint_clicked(); break;
        case 2: _t->on_ckTriggerTime_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_ckTriggerType_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_ckUserName_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_btnDelete_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogBlogDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_LogBlogDialog.data,
    qt_meta_data_LogBlogDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogBlogDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogBlogDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogBlogDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LogBlogDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
