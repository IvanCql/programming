/****************************************************************************
** Meta object code from reading C++ file 'sort_dialog.h'
**
** Created: Tue Sep 23 18:18:24 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sort_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sort_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_SortDialog[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_SortDialog[] = {
    "SortDialog\0"
};

const QMetaObject SortDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SortDialog,
      qt_meta_data_SortDialog, 0 }
};

const QMetaObject *SortDialog::metaObject() const
{
    return &staticMetaObject;
}

void *SortDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SortDialog))
	return static_cast<void*>(const_cast< SortDialog*>(this));
    if (!strcmp(_clname, "Ui::Dialog"))
	return static_cast< Ui::Dialog*>(const_cast< SortDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SortDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
