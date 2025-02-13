/****************************************************************************
** Meta object code from reading C++ file 'Lab8.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Lab8.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lab8.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lab8_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lab8_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lab8_t qt_meta_stringdata_Lab8 = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Lab8"
QT_MOC_LITERAL(1, 5, 25), // "on_openFileButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 27), // "on_saveToFileButton_clicked"
QT_MOC_LITERAL(4, 60, 24), // "on_encryptButton_clicked"
QT_MOC_LITERAL(5, 85, 24), // "on_decryptButton_clicked"
QT_MOC_LITERAL(6, 110, 21), // "on_copyButton_clicked"
QT_MOC_LITERAL(7, 132, 22), // "on_pasteButton_clicked"
QT_MOC_LITERAL(8, 155, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(9, 178, 24), // "on_radioButton_5_toggled"
QT_MOC_LITERAL(10, 203, 7) // "checked"

    },
    "Lab8\0on_openFileButton_clicked\0\0"
    "on_saveToFileButton_clicked\0"
    "on_encryptButton_clicked\0"
    "on_decryptButton_clicked\0on_copyButton_clicked\0"
    "on_pasteButton_clicked\0on_clearButton_clicked\0"
    "on_radioButton_5_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lab8[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void Lab8::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lab8 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openFileButton_clicked(); break;
        case 1: _t->on_saveToFileButton_clicked(); break;
        case 2: _t->on_encryptButton_clicked(); break;
        case 3: _t->on_decryptButton_clicked(); break;
        case 4: _t->on_copyButton_clicked(); break;
        case 5: _t->on_pasteButton_clicked(); break;
        case 6: _t->on_clearButton_clicked(); break;
        case 7: _t->on_radioButton_5_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lab8::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Lab8.data,
    qt_meta_data_Lab8,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lab8::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lab8::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lab8.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Lab8::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
