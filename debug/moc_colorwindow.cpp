/****************************************************************************
** Meta object code from reading C++ file 'colorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../colorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorWindow_t {
    QByteArrayData data[11];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorWindow_t qt_meta_stringdata_ColorWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorWindow"
QT_MOC_LITERAL(1, 12, 5), // "m_red"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "red"
QT_MOC_LITERAL(4, 23, 7), // "m_green"
QT_MOC_LITERAL(5, 31, 5), // "green"
QT_MOC_LITERAL(6, 37, 6), // "m_blue"
QT_MOC_LITERAL(7, 44, 4), // "blue"
QT_MOC_LITERAL(8, 49, 7), // "m_alpha"
QT_MOC_LITERAL(9, 57, 5), // "alpha"
QT_MOC_LITERAL(10, 63, 7) // "mudaCor"

    },
    "ColorWindow\0m_red\0\0red\0m_green\0green\0"
    "m_blue\0blue\0m_alpha\0alpha\0mudaCor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorWindow[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      10,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void ColorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->m_red((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->m_green((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->m_blue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->m_alpha((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->mudaCor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ColorWindow.data,
    qt_meta_data_ColorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ColorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
