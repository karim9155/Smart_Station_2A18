/****************************************************************************
** Meta object code from reading C++ file 'dialogticket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../login/tickets/dialogticket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogticket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialogticket_t {
    QByteArrayData data[14];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialogticket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialogticket_t qt_meta_stringdata_Dialogticket = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Dialogticket"
QT_MOC_LITERAL(1, 13, 21), // "on_btnAjouter_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "refresh"
QT_MOC_LITERAL(4, 44, 22), // "on_tabTicket_activated"
QT_MOC_LITERAL(5, 67, 5), // "index"
QT_MOC_LITERAL(6, 73, 24), // "on_supprimerTbtn_clicked"
QT_MOC_LITERAL(7, 98, 23), // "on_modifierTbtn_clicked"
QT_MOC_LITERAL(8, 122, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(9, 146, 4), // "arg1"
QT_MOC_LITERAL(10, 151, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(11, 183, 24), // "on_btnCalendrier_clicked"
QT_MOC_LITERAL(12, 208, 19), // "on_imageBtn_clicked"
QT_MOC_LITERAL(13, 228, 21) // "on_pushButton_clicked"

    },
    "Dialogticket\0on_btnAjouter_clicked\0\0"
    "refresh\0on_tabTicket_activated\0index\0"
    "on_supprimerTbtn_clicked\0"
    "on_modifierTbtn_clicked\0on_lineEdit_textChanged\0"
    "arg1\0on_comboBox_currentIndexChanged\0"
    "on_btnCalendrier_clicked\0on_imageBtn_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialogticket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    0,   77,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialogticket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialogticket *_t = static_cast<Dialogticket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnAjouter_clicked(); break;
        case 1: _t->refresh(); break;
        case 2: _t->on_tabTicket_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_supprimerTbtn_clicked(); break;
        case 4: _t->on_modifierTbtn_clicked(); break;
        case 5: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_btnCalendrier_clicked(); break;
        case 8: _t->on_imageBtn_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Dialogticket::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialogticket.data,
      qt_meta_data_Dialogticket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Dialogticket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialogticket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialogticket.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialogticket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
