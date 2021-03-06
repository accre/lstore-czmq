/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#include "QmlZuuid.h"


///
//  Print properties of the zuuid object.
void QmlZuuid::print () {
    zuuid_print (self);
};

///
//  Set UUID to new supplied ZUUID_LEN-octet value.
void QmlZuuid::set (const byte *source) {
    zuuid_set (self, source);
};

///
//  Set UUID to new supplied string value skipping '-' and '{' '}'
//  optional delimiters. Return 0 if OK, else returns -1.         
int QmlZuuid::setStr (const QString &source) {
    return zuuid_set_str (self, source.toUtf8().data());
};

///
//  Return UUID binary data.
const byte *QmlZuuid::data () {
    return zuuid_data (self);
};

///
//  Return UUID binary size
size_t QmlZuuid::size () {
    return zuuid_size (self);
};

///
//  Returns UUID as string
const QString QmlZuuid::str () {
    return QString (zuuid_str (self));
};

///
//  Return UUID in the canonical string format: 8-4-4-4-12, in lower
//  case. Caller does not modify or free returned value. See        
//  http://en.wikipedia.org/wiki/Universally_unique_identifier      
const QString QmlZuuid::strCanonical () {
    return QString (zuuid_str_canonical (self));
};

///
//  Store UUID blob in target array
void QmlZuuid::export (byte *target) {
    zuuid_export (self, target);
};

///
//  Check if UUID is same as supplied value
bool QmlZuuid::eq (const byte *compare) {
    return zuuid_eq (self, compare);
};

///
//  Check if UUID is different from supplied value
bool QmlZuuid::neq (const byte *compare) {
    return zuuid_neq (self, compare);
};

///
//  Make copy of UUID object; if uuid is null, or memory was exhausted,
//  returns null.                                                      
QmlZuuid *QmlZuuid::dup () {
    QmlZuuid *retQ_ = new QmlZuuid ();
    retQ_->self = zuuid_dup (self);
    return retQ_;
};


QObject* QmlZuuid::qmlAttachedProperties(QObject* object) {
    return new QmlZuuidAttached(object);
}


///
//  Create UUID object from supplied ZUUID_LEN-octet value.
QmlZuuid *QmlZuuidAttached::newFrom (const byte *source) {
    QmlZuuid *retQ_ = new QmlZuuid ();
    retQ_->self = zuuid_new_from (source);
    return retQ_;
};

///
//  Self test of this class
void QmlZuuidAttached::test (bool verbose) {
    zuuid_test (verbose);
};

///
//  Constructor
QmlZuuid *QmlZuuidAttached::construct () {
    QmlZuuid *qmlSelf = new QmlZuuid ();
    qmlSelf->self = zuuid_new ();
    return qmlSelf;
};

///
//  Destructor
void QmlZuuidAttached::destruct (QmlZuuid *qmlSelf) {
    zuuid_destroy (&qmlSelf->self);
};

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
