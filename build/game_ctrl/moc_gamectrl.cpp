/****************************************************************************
** Meta object code from reading C++ file 'gamectrl.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/game_ctrl/src/gamectrl.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamectrl.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TeamLabel_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TeamLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TeamLabel_t qt_meta_stringdata_TeamLabel = {
    {
QT_MOC_LITERAL(0, 0, 9) // "TeamLabel"

    },
    "TeamLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TeamLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TeamLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TeamLabel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TeamLabel.data,
      qt_meta_data_TeamLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TeamLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TeamLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TeamLabel.stringdata0))
        return static_cast<void*>(const_cast< TeamLabel*>(this));
    return QWidget::qt_metacast(_clname);
}

int TeamLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_StartDlg_t {
    QByteArrayData data[3];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StartDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StartDlg_t qt_meta_stringdata_StartDlg = {
    {
QT_MOC_LITERAL(0, 0, 8), // "StartDlg"
QT_MOC_LITERAL(1, 9, 7), // "OnStart"
QT_MOC_LITERAL(2, 17, 0) // ""

    },
    "StartDlg\0OnStart\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StartDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StartDlg *_t = static_cast<StartDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnStart(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject StartDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StartDlg.data,
      qt_meta_data_StartDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StartDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StartDlg.stringdata0))
        return static_cast<void*>(const_cast< StartDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int StartDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_GameCtrl_t {
    QByteArrayData data[14];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameCtrl_t qt_meta_stringdata_GameCtrl = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameCtrl"
QT_MOC_LITERAL(1, 9, 8), // "OnFTimer"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "OnBtnInitClicked"
QT_MOC_LITERAL(4, 36, 17), // "OnBtnReadyClicked"
QT_MOC_LITERAL(5, 54, 16), // "OnBtnPlayClicked"
QT_MOC_LITERAL(6, 71, 17), // "OnBtnPauseClicked"
QT_MOC_LITERAL(7, 89, 18), // "OnBtnFinishClicked"
QT_MOC_LITERAL(8, 108, 20), // "OnBtnRedStandClicked"
QT_MOC_LITERAL(9, 129, 21), // "OnBtnBlueStandClicked"
QT_MOC_LITERAL(10, 151, 20), // "OnBtnRedResetClicked"
QT_MOC_LITERAL(11, 172, 21), // "OnBtnBlueResetClicked"
QT_MOC_LITERAL(12, 194, 17), // "OnBtnRedOKClicked"
QT_MOC_LITERAL(13, 212, 18) // "OnBtnBlueOKClicked"

    },
    "GameCtrl\0OnFTimer\0\0OnBtnInitClicked\0"
    "OnBtnReadyClicked\0OnBtnPlayClicked\0"
    "OnBtnPauseClicked\0OnBtnFinishClicked\0"
    "OnBtnRedStandClicked\0OnBtnBlueStandClicked\0"
    "OnBtnRedResetClicked\0OnBtnBlueResetClicked\0"
    "OnBtnRedOKClicked\0OnBtnBlueOKClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameCtrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

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
    QMetaType::Void,

       0        // eod
};

void GameCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameCtrl *_t = static_cast<GameCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFTimer(); break;
        case 1: _t->OnBtnInitClicked(); break;
        case 2: _t->OnBtnReadyClicked(); break;
        case 3: _t->OnBtnPlayClicked(); break;
        case 4: _t->OnBtnPauseClicked(); break;
        case 5: _t->OnBtnFinishClicked(); break;
        case 6: _t->OnBtnRedStandClicked(); break;
        case 7: _t->OnBtnBlueStandClicked(); break;
        case 8: _t->OnBtnRedResetClicked(); break;
        case 9: _t->OnBtnBlueResetClicked(); break;
        case 10: _t->OnBtnRedOKClicked(); break;
        case 11: _t->OnBtnBlueOKClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GameCtrl::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GameCtrl.data,
      qt_meta_data_GameCtrl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameCtrl.stringdata0))
        return static_cast<void*>(const_cast< GameCtrl*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GameCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
