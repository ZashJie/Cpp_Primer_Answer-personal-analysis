#-------------------------------------------------
#
# Project created by QtCreator 2022-10-14T16:27:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 02--SignalAndSlow
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    teacher.cpp \
    student.cpp

HEADERS  += widget.h \
    teacher.h \
    student.h

FORMS    += widget.ui

CONFIG += c++11
