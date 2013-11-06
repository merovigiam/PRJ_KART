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
    newmainwindow.cpp \
    rooms/begin_room.cpp \
    startwindow.cpp \
    rooms/r_fo_c.cpp \
    rooms/r_fo_d.cpp \
    rooms/r_fo_e.cpp \
    rooms/r_fo_f.cpp

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
    startwindow.h \
    newmainwindow.h \
    rooms/begin_room.h \
    rooms/r_fo_c.h \
    rooms/r_fo_d.h \
    rooms/r_fo_e.h \
    rooms/r_fo_f.h

FORMS    += mainwindow.ui \
    about.ui \
    rooms/testfolder.ui \
    startwindow.ui \
    newmainwindow.ui \
    rooms/begin_room.ui \
    rooms/r_fo_c.ui \
    rooms/r_fo_d.ui \
    rooms/r_fo_e.ui \
    rooms/r_fo_f.ui
