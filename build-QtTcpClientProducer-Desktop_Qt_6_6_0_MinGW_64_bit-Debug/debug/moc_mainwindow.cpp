/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Documents/final/pa3/QtTcpClientProducer/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "tcpConnect",
    "",
    "tcpDisconnect",
    "quantidadeMax",
    "quantidadeMin",
    "valorTemp",
    "putData",
    "startTemp",
    "stopTemp",
    "timerEvent",
    "QTimerEvent*",
    "event"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[10];
    char stringdata7[8];
    char stringdata8[10];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[13];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 10),  // "tcpConnect"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 13),  // "tcpDisconnect"
        QT_MOC_LITERAL(37, 13),  // "quantidadeMax"
        QT_MOC_LITERAL(51, 13),  // "quantidadeMin"
        QT_MOC_LITERAL(65, 9),  // "valorTemp"
        QT_MOC_LITERAL(75, 7),  // "putData"
        QT_MOC_LITERAL(83, 9),  // "startTemp"
        QT_MOC_LITERAL(93, 8),  // "stopTemp"
        QT_MOC_LITERAL(102, 10),  // "timerEvent"
        QT_MOC_LITERAL(113, 12),  // "QTimerEvent*"
        QT_MOC_LITERAL(126, 5)   // "event"
    },
    "MainWindow",
    "tcpConnect",
    "",
    "tcpDisconnect",
    "quantidadeMax",
    "quantidadeMin",
    "valorTemp",
    "putData",
    "startTemp",
    "stopTemp",
    "timerEvent",
    "QTimerEvent*",
    "event"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    1,   70,    2, 0x0a,    3 /* Public */,
       5,    1,   73,    2, 0x0a,    5 /* Public */,
       6,    1,   76,    2, 0x0a,    7 /* Public */,
       7,    0,   79,    2, 0x0a,    9 /* Public */,
       8,    0,   80,    2, 0x0a,   10 /* Public */,
       9,    0,   81,    2, 0x0a,   11 /* Public */,
      10,    1,   82,    2, 0x0a,   12 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'tcpConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tcpDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'quantidadeMax'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'quantidadeMin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'valorTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'putData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timerEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTimerEvent *, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tcpConnect(); break;
        case 1: _t->tcpDisconnect(); break;
        case 2: _t->quantidadeMax((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->quantidadeMin((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->valorTemp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->putData(); break;
        case 6: _t->startTemp(); break;
        case 7: _t->stopTemp(); break;
        case 8: _t->timerEvent((*reinterpret_cast< std::add_pointer_t<QTimerEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
