#-------------------------------------------------
#
# Project created by QtCreator 2013-10-20T14:57:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROJECT_KART
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    item.cpp \
    inventory.cpp \
    enemy.cpp \
    about.cpp \
    food.cpp \
    weapon.cpp \
    gameprogress.cpp \
    rooms/testfolder.cpp \
    g.cpp

HEADERS  += mainwindow.h \
    player.h \
    item.h \
    inventory.h \
    enemy.h \
    about.h \
    food.h \
    weapon.h \
    gameprogress.h \
    rooms/testfolder.h \
    g.h

FORMS    += mainwindow.ui \
    about.ui \
    rooms/testfolder.ui
