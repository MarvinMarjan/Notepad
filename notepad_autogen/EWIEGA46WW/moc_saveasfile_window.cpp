/****************************************************************************
** Meta object code from reading C++ file 'saveasfile_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../notepad/saveasfile_window.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveasfile_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_saveasfile_window_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[21];
    char stringdata5[30];
    char stringdata6[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_saveasfile_window_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_saveasfile_window_t qt_meta_stringdata_saveasfile_window = {
    {
        QT_MOC_LITERAL(0, 17),  // "saveasfile_window"
        QT_MOC_LITERAL(18, 10),  // "closeEvent"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(43, 20),  // "on_ok_button_clicked"
        QT_MOC_LITERAL(64, 29),  // "on_filename_input_textChanged"
        QT_MOC_LITERAL(94, 4)   // "arg1"
    },
    "saveasfile_window",
    "closeEvent",
    "",
    "QCloseEvent*",
    "on_ok_button_clicked",
    "on_filename_input_textChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_saveasfile_window[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject saveasfile_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_saveasfile_window.offsetsAndSizes,
    qt_meta_data_saveasfile_window,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_saveasfile_window_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<saveasfile_window, std::true_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'on_ok_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_filename_input_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void saveasfile_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<saveasfile_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 1: _t->on_ok_button_clicked(); break;
        case 2: _t->on_filename_input_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *saveasfile_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveasfile_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_saveasfile_window.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int saveasfile_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
