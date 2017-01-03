/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 15),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 13),
QT_MOC_LITERAL(4, 42, 20),
QT_MOC_LITERAL(5, 63, 18),
QT_MOC_LITERAL(6, 82, 17),
QT_MOC_LITERAL(7, 100, 23),
QT_MOC_LITERAL(8, 124, 8),
QT_MOC_LITERAL(9, 133, 26),
QT_MOC_LITERAL(10, 160, 5),
QT_MOC_LITERAL(11, 166, 30),
QT_MOC_LITERAL(12, 197, 23),
QT_MOC_LITERAL(13, 221, 15),
QT_MOC_LITERAL(14, 237, 19),
QT_MOC_LITERAL(15, 257, 18),
QT_MOC_LITERAL(16, 276, 27),
QT_MOC_LITERAL(17, 304, 21),
QT_MOC_LITERAL(18, 326, 22),
QT_MOC_LITERAL(19, 349, 21),
QT_MOC_LITERAL(20, 371, 4),
QT_MOC_LITERAL(21, 376, 22),
QT_MOC_LITERAL(22, 399, 23)
    },
    "MainWindow\0on_back_clicked\0\0on_Go_clicked\0"
    "on_url_returnPressed\0on_forward_clicked\0"
    "on_reload_clicked\0on_webView_loadProgress\0"
    "progress\0on_tabWidget_tabBarClicked\0"
    "index\0on_tabWidget_tabCloseRequested\0"
    "on_pushButton_2_clicked\0on_Menu_clicked\0"
    "on_settings_clicked\0on_Options_clicked\0"
    "on_tabWidget_currentChanged\0"
    "on_pushButton_clicked\0on_AddBookmark_clicked\0"
    "on_webView_urlChanged\0arg1\0"
    "on_webView_linkClicked\0on_webView_loadFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08,
       3,    0,  105,    2, 0x08,
       4,    0,  106,    2, 0x08,
       5,    0,  107,    2, 0x08,
       6,    0,  108,    2, 0x08,
       7,    1,  109,    2, 0x08,
       9,    1,  112,    2, 0x08,
      11,    1,  115,    2, 0x08,
      12,    0,  118,    2, 0x08,
      13,    0,  119,    2, 0x08,
      14,    0,  120,    2, 0x08,
      15,    0,  121,    2, 0x08,
      16,    1,  122,    2, 0x08,
      17,    0,  125,    2, 0x08,
      18,    0,  126,    2, 0x08,
      19,    1,  127,    2, 0x08,
      21,    1,  130,    2, 0x08,
      22,    1,  133,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   20,
    QMetaType::Void, QMetaType::QUrl,   20,
    QMetaType::Void, QMetaType::Bool,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_back_clicked(); break;
        case 1: _t->on_Go_clicked(); break;
        case 2: _t->on_url_returnPressed(); break;
        case 3: _t->on_forward_clicked(); break;
        case 4: _t->on_reload_clicked(); break;
        case 5: _t->on_webView_loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
//        case 6: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_2_clicked(); break;
//        case 9: _t->on_Menu_clicked(); break;
//        case 10: _t->on_settings_clicked(); break;
//        case 11: _t->on_Options_clicked(); break;
//        case 12: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
//        case 13: _t->on_pushButton_clicked(); break;
        case 14: _t->on_AddBookmark_clicked(); break;
//        case 15: _t->on_webView_urlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
//        case 16: _t->on_webView_linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 17: _t->on_webView_loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
