/****************************************************************************
** Meta object code from reading C++ file 'mainwindow1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../login/employes/mainwindow1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow1_t {
    QByteArrayData data[14];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow1_t qt_meta_stringdata_MainWindow1 = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainWindow1"
QT_MOC_LITERAL(1, 12, 8), // "sendMail"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "mailSent"
QT_MOC_LITERAL(4, 31, 21), // "on_bt_Ajouter_clicked"
QT_MOC_LITERAL(5, 53, 22), // "on_Supp_Button_clicked"
QT_MOC_LITERAL(6, 76, 24), // "on_bt_Ajouter_md_clicked"
QT_MOC_LITERAL(7, 101, 17), // "on_triage_clicked"
QT_MOC_LITERAL(8, 119, 26), // "on_trialphabetique_clicked"
QT_MOC_LITERAL(9, 146, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(10, 170, 4), // "arg1"
QT_MOC_LITERAL(11, 175, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 197, 24), // "on_pushButton_8__clicked"
QT_MOC_LITERAL(13, 222, 15) // "on_stat_clicked"

    },
    "MainWindow1\0sendMail\0\0mailSent\0"
    "on_bt_Ajouter_clicked\0on_Supp_Button_clicked\0"
    "on_bt_Ajouter_md_clicked\0on_triage_clicked\0"
    "on_trialphabetique_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pushButton_clicked\0on_pushButton_8__clicked\0"
    "on_stat_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    1,   70,    2, 0x08 /* Private */,
       4,    0,   73,    2, 0x08 /* Private */,
       5,    0,   74,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow1 *_t = static_cast<MainWindow1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMail(); break;
        case 1: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_bt_Ajouter_clicked(); break;
        case 3: _t->on_Supp_Button_clicked(); break;
        case 4: _t->on_bt_Ajouter_md_clicked(); break;
        case 5: _t->on_triage_clicked(); break;
        case 6: _t->on_trialphabetique_clicked(); break;
        case 7: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;

        case 9: _t->on_pushButton_8__clicked(); break;
        case 10: _t->on_stat_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow1.data,
      qt_meta_data_MainWindow1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
