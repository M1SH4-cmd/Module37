/****************************************************************************
** Meta object code from reading C++ file 'callermainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../callermainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callermainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN16CallerMainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16CallerMainWindowE = QtMocHelpers::stringData(
    "CallerMainWindow",
    "add0",
    "",
    "add1",
    "add2",
    "add3",
    "add4",
    "add5",
    "add6",
    "add7",
    "add8",
    "add9",
    "makeCall"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16CallerMainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x0a,    1 /* Public */,
       3,    0,   81,    2, 0x0a,    2 /* Public */,
       4,    0,   82,    2, 0x0a,    3 /* Public */,
       5,    0,   83,    2, 0x0a,    4 /* Public */,
       6,    0,   84,    2, 0x0a,    5 /* Public */,
       7,    0,   85,    2, 0x0a,    6 /* Public */,
       8,    0,   86,    2, 0x0a,    7 /* Public */,
       9,    0,   87,    2, 0x0a,    8 /* Public */,
      10,    0,   88,    2, 0x0a,    9 /* Public */,
      11,    0,   89,    2, 0x0a,   10 /* Public */,
      12,    0,   90,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CallerMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN16CallerMainWindowE.offsetsAndSizes,
    qt_meta_data_ZN16CallerMainWindowE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16CallerMainWindowE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CallerMainWindow, std::true_type>,
        // method 'add0'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add6'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add7'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add8'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add9'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'makeCall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CallerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CallerMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->add0(); break;
        case 1: _t->add1(); break;
        case 2: _t->add2(); break;
        case 3: _t->add3(); break;
        case 4: _t->add4(); break;
        case 5: _t->add5(); break;
        case 6: _t->add6(); break;
        case 7: _t->add7(); break;
        case 8: _t->add8(); break;
        case 9: _t->add9(); break;
        case 10: _t->makeCall(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CallerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16CallerMainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CallerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
