#-------------------------------------------------
#
# Project created by QtCreator 2016-03-24T22:11:55
#
#-------------------------------------------------

QT       += core gui
QT       += network

TARGET = DBS
TEMPLATE = app


SOURCES += main.cpp\
        dbsserver.cpp \
    version.c

HEADERS  += dbsserver.h \
    version.h \
    stdcommon.h

FORMS    += dbsserver.ui
