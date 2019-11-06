/****************************************************************************
** Meta object code from reading C++ file 'action_debuger.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/debuger/src/action_debuger.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'action_debuger.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPosListWidget_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPosListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPosListWidget_t qt_meta_stringdata_CPosListWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CPosListWidget"
QT_MOC_LITERAL(1, 15, 11), // "nameChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "timeChanged"
QT_MOC_LITERAL(4, 40, 14), // "procNameChange"
QT_MOC_LITERAL(5, 55, 14) // "procTimeChange"

    },
    "CPosListWidget\0nameChanged\0\0timeChanged\0"
    "procNameChange\0procTimeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPosListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CPosListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPosListWidget *_t = static_cast<CPosListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->timeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->procNameChange(); break;
        case 3: _t->procTimeChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CPosListWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPosListWidget::nameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CPosListWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPosListWidget::timeChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CPosListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPosListWidget.data,
      qt_meta_data_CPosListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPosListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPosListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPosListWidget.stringdata0))
        return static_cast<void*>(const_cast< CPosListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPosListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CPosListWidget::nameChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPosListWidget::timeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CJointDegWidget_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CJointDegWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CJointDegWidget_t qt_meta_stringdata_CJointDegWidget = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CJointDegWidget"

    },
    "CJointDegWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CJointDegWidget[] = {

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

void CJointDegWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CJointDegWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CJointDegWidget.data,
      qt_meta_data_CJointDegWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CJointDegWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CJointDegWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CJointDegWidget.stringdata0))
        return static_cast<void*>(const_cast< CJointDegWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CJointDegWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CKSlider_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CKSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CKSlider_t qt_meta_stringdata_CKSlider = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CKSlider"
QT_MOC_LITERAL(1, 9, 12), // "valueChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "value"
QT_MOC_LITERAL(4, 29, 16) // "procValueChanged"

    },
    "CKSlider\0valueChanged\0\0value\0"
    "procValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CKSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CKSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CKSlider *_t = static_cast<CKSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->procValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CKSlider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CKSlider::valueChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CKSlider::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CKSlider.data,
      qt_meta_data_CKSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CKSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CKSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CKSlider.stringdata0))
        return static_cast<void*>(const_cast< CKSlider*>(this));
    return QWidget::qt_metacast(_clname);
}

int CKSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CKSlider::valueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ActionDebuger_t {
    QByteArrayData data[27];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionDebuger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionDebuger_t qt_meta_stringdata_ActionDebuger = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ActionDebuger"
QT_MOC_LITERAL(1, 14, 6), // "closed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "procX"
QT_MOC_LITERAL(4, 28, 5), // "value"
QT_MOC_LITERAL(5, 34, 5), // "procY"
QT_MOC_LITERAL(6, 40, 5), // "procZ"
QT_MOC_LITERAL(7, 46, 8), // "procRoll"
QT_MOC_LITERAL(8, 55, 9), // "procPitch"
QT_MOC_LITERAL(9, 65, 7), // "procYaw"
QT_MOC_LITERAL(10, 73, 13), // "procActSelect"
QT_MOC_LITERAL(11, 87, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(12, 104, 4), // "item"
QT_MOC_LITERAL(13, 109, 13), // "procPosSelect"
QT_MOC_LITERAL(14, 123, 23), // "procButtonInsertPosBack"
QT_MOC_LITERAL(15, 147, 24), // "procButtonInsertPosFront"
QT_MOC_LITERAL(16, 172, 19), // "procButtonDeletePos"
QT_MOC_LITERAL(17, 192, 17), // "procButtonSavePos"
QT_MOC_LITERAL(18, 210, 19), // "procButtonAddAction"
QT_MOC_LITERAL(19, 230, 22), // "procButtonDeleteAction"
QT_MOC_LITERAL(20, 253, 20), // "procButtonSaveAction"
QT_MOC_LITERAL(21, 274, 16), // "procButtonRunPos"
QT_MOC_LITERAL(22, 291, 12), // "updateSlider"
QT_MOC_LITERAL(23, 304, 2), // "id"
QT_MOC_LITERAL(24, 307, 9), // "procTimer"
QT_MOC_LITERAL(25, 317, 18), // "procPosNameChanged"
QT_MOC_LITERAL(26, 336, 18) // "procPosTimeChanged"

    },
    "ActionDebuger\0closed\0\0procX\0value\0"
    "procY\0procZ\0procRoll\0procPitch\0procYaw\0"
    "procActSelect\0QListWidgetItem*\0item\0"
    "procPosSelect\0procButtonInsertPosBack\0"
    "procButtonInsertPosFront\0procButtonDeletePos\0"
    "procButtonSavePos\0procButtonAddAction\0"
    "procButtonDeleteAction\0procButtonSaveAction\0"
    "procButtonRunPos\0updateSlider\0id\0"
    "procTimer\0procPosNameChanged\0"
    "procPosTimeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionDebuger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  120,    2, 0x0a /* Public */,
       5,    1,  123,    2, 0x0a /* Public */,
       6,    1,  126,    2, 0x0a /* Public */,
       7,    1,  129,    2, 0x0a /* Public */,
       8,    1,  132,    2, 0x0a /* Public */,
       9,    1,  135,    2, 0x0a /* Public */,
      10,    1,  138,    2, 0x0a /* Public */,
      13,    1,  141,    2, 0x0a /* Public */,
      14,    0,  144,    2, 0x0a /* Public */,
      15,    0,  145,    2, 0x0a /* Public */,
      16,    0,  146,    2, 0x0a /* Public */,
      17,    0,  147,    2, 0x0a /* Public */,
      18,    0,  148,    2, 0x0a /* Public */,
      19,    0,  149,    2, 0x0a /* Public */,
      20,    0,  150,    2, 0x0a /* Public */,
      21,    0,  151,    2, 0x0a /* Public */,
      22,    1,  152,    2, 0x0a /* Public */,
      24,    0,  155,    2, 0x0a /* Public */,
      25,    1,  156,    2, 0x0a /* Public */,
      26,    1,  159,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void ActionDebuger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionDebuger *_t = static_cast<ActionDebuger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->procX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->procY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->procZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->procRoll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->procPitch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->procYaw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->procActSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->procPosSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->procButtonInsertPosBack(); break;
        case 10: _t->procButtonInsertPosFront(); break;
        case 11: _t->procButtonDeletePos(); break;
        case 12: _t->procButtonSavePos(); break;
        case 13: _t->procButtonAddAction(); break;
        case 14: _t->procButtonDeleteAction(); break;
        case 15: _t->procButtonSaveAction(); break;
        case 16: _t->procButtonRunPos(); break;
        case 17: _t->updateSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->procTimer(); break;
        case 19: _t->procPosNameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->procPosTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionDebuger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionDebuger::closed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ActionDebuger::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ActionDebuger.data,
      qt_meta_data_ActionDebuger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActionDebuger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionDebuger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActionDebuger.stringdata0))
        return static_cast<void*>(const_cast< ActionDebuger*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ActionDebuger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ActionDebuger::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
