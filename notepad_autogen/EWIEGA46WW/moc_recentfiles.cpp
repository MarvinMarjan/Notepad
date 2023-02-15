/****************************************************************************
** Meta object code from reading C++ file 'recentfiles.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../notepad/recentfiles.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recentfiles.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_RecentFiles_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[25];
    char stringdata5[25];
    char stringdata6[31];
    char stringdata7[17];
    char stringdata8[5];
    char stringdata9[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_RecentFiles_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_RecentFiles_t qt_meta_stringdata_RecentFiles = {
    {
        QT_MOC_LITERAL(0, 11),  // "RecentFiles"
        QT_MOC_LITERAL(12, 10),  // "closeEvent"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(37, 24),  // "on_cancel_button_clicked"
        QT_MOC_LITERAL(62, 24),  // "on_select_button_clicked"
        QT_MOC_LITERAL(87, 30),  // "on_file_list_itemDoubleClicked"
        QT_MOC_LITERAL(118, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(135, 4),  // "item"
        QT_MOC_LITERAL(140, 24)   // "on_remove_button_clicked"
    },
    "RecentFiles",
    "closeEvent",
    "",
    "QCloseEvent*",
    "on_cancel_button_clicked",
    "on_select_button_clicked",
    "on_file_list_itemDoubleClicked",
    "QListWidgetItem*",
    "item",
    "on_remove_button_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_RecentFiles[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    1,   49,    2, 0x08,    5 /* Private */,
       9,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RecentFiles::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RecentFiles.offsetsAndSizes,
    qt_meta_data_RecentFiles,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_RecentFiles_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RecentFiles, std::true_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'on_cancel_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_select_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_file_list_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_remove_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RecentFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RecentFiles *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 1: _t->on_cancel_button_clicked(); break;
        case 2: _t->on_select_button_clicked(); break;
        case 3: _t->on_file_list_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 4: _t->on_remove_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *RecentFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecentFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RecentFiles.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RecentFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
