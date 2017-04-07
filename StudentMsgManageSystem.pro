#-------------------------------------------------
#
# Project created by QtCreator 2016-05-27T11:40:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StudentMsgManageSystem
TEMPLATE = app


SOURCES += main.cpp\
        homewindow.cpp \
    readmsgfromfilewd.cpp \
    student.cpp \
    displaystumsg.cpp \
    inputstumsg.cpp \
    seachstubyid.cpp \
    insetstu.cpp \
    modifystumsg.cpp \
    byebye.cpp

HEADERS  += homewindow.h \
    readmsgfromfilewd.h \
    student.h \
    displaystumsg.h \
    inputstumsg.h \
    seachstubyid.h \
    insetstu.h \
    modifystumsg.h \
    byebye.h

FORMS    += homewindow.ui \
    readmsgfromfilewd.ui \
    displaystumsg.ui \
    inputstumsg.ui \
    seachstubyid.ui \
    insetstu.ui \
    modifystumsg.ui \
    byebye.ui

RESOURCES +=
