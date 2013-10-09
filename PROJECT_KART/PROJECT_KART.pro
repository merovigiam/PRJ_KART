#-------------------------------------------------
#
# Project created by QtCreator 2013-10-09T09:16:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROJECT_KART
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    player.cpp \
    item.cpp \
    enemy.cpp \
    inventory.cpp

HEADERS  += mainwindow.h \
    about.h \
    player.h \
    item.h \
    enemy.h \
    inventory.h

FORMS    += mainwindow.ui \
    about.ui
