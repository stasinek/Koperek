/****************************************************************************
** Meta object code from reading C++ file 'tconsole_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tconsole_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tconsole_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TConsole_form_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TConsole_form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TConsole_form_t qt_meta_stringdata_TConsole_form = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TConsole_form"
QT_MOC_LITERAL(1, 14, 23), // "on_toolButton_2_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "checked"
QT_MOC_LITERAL(4, 47, 23), // "on_toolButton_3_clicked"
QT_MOC_LITERAL(5, 71, 26) // "on_toolButton_MENU_clicked"

    },
    "TConsole_form\0on_toolButton_2_clicked\0"
    "\0checked\0on_toolButton_3_clicked\0"
    "on_toolButton_MENU_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TConsole_form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TConsole_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TConsole_form *_t = static_cast<TConsole_form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toolButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_toolButton_3_clicked(); break;
        case 2: _t->on_toolButton_MENU_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject TConsole_form::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TConsole_form.data,
      qt_meta_data_TConsole_form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TConsole_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TConsole_form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TConsole_form.stringdata0))
        return static_cast<void*>(const_cast< TConsole_form*>(this));
    return QDialog::qt_metacast(_clname);
}

int TConsole_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
