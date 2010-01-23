/****************************************************************************
** Meta object code from reading C++ file 'eksigatorwindow.h'
**
** Created: Sat Jan 23 21:54:15 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eksigatorwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eksigatorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EksigatorWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x08,
      45,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EksigatorWindow[] = {
    "EksigatorWindow\0\0id,error\0finished(int,bool)\0"
    "on_fetchButton_clicked()\0"
};

const QMetaObject EksigatorWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EksigatorWindow,
      qt_meta_data_EksigatorWindow, 0 }
};

const QMetaObject *EksigatorWindow::metaObject() const
{
    return &staticMetaObject;
}

void *EksigatorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EksigatorWindow))
        return static_cast<void*>(const_cast< EksigatorWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EksigatorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: on_fetchButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
