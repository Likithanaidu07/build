/****************************************************************************
** Meta object code from reading C++ file 'watch_data_list_item.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../watch_data_list_item.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watch_data_list_item.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS = QtMocHelpers::stringData(
    "watch_Data_List_Item",
    "add_watch_item_to_main_win_signal",
    "",
    "Indices_Data_Struct",
    "on_checkBoxShowMainScreen_clicked",
    "checked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[21];
    char stringdata1[34];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[34];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS_t qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "watch_Data_List_Item"
        QT_MOC_LITERAL(21, 33),  // "add_watch_item_to_main_win_si..."
        QT_MOC_LITERAL(55, 0),  // ""
        QT_MOC_LITERAL(56, 19),  // "Indices_Data_Struct"
        QT_MOC_LITERAL(76, 33),  // "on_checkBoxShowMainScreen_cli..."
        QT_MOC_LITERAL(110, 7)   // "checked"
    },
    "watch_Data_List_Item",
    "add_watch_item_to_main_win_signal",
    "",
    "Indices_Data_Struct",
    "on_checkBoxShowMainScreen_clicked",
    "checked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSwatch_Data_List_ItemENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   31,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject watch_Data_List_Item::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSwatch_Data_List_ItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<watch_Data_List_Item, std::true_type>,
        // method 'add_watch_item_to_main_win_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<Indices_Data_Struct, std::false_type>,
        // method 'on_checkBoxShowMainScreen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void watch_Data_List_Item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<watch_Data_List_Item *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add_watch_item_to_main_win_signal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Indices_Data_Struct>>(_a[2]))); break;
        case 1: _t->on_checkBoxShowMainScreen_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (watch_Data_List_Item::*)(bool , Indices_Data_Struct );
            if (_t _q_method = &watch_Data_List_Item::add_watch_item_to_main_win_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *watch_Data_List_Item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *watch_Data_List_Item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSwatch_Data_List_ItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int watch_Data_List_Item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void watch_Data_List_Item::add_watch_item_to_main_win_signal(bool _t1, Indices_Data_Struct _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
