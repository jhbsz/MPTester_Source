# #####################################################################
# Automatically generated by qmake (2.01a) ?? 9? 5 14:51:24 2013
# #####################################################################
TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += . \
            QtCore
QT += sql \
    dbus

# Input
HEADERS += Adgpib.h \
    gpib_const.h \
    MPTester.h \
    AP_Interface.h
FORMS += MPTester.ui
SOURCES += main.cpp \
    MPTester.cpp \
    AP_Interface.cpp
LIBS += -lpci_dask \
    -L/usr/local/lib/ \
    -lusb-1.0 \
    -ladgpib32
