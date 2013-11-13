#-------------------------------------------------
#
# Project created by QtCreator 2013-10-11T14:16:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROJECT_KART
TEMPLATE = app


SOURCES += main.cpp\
    player.cpp \
    item.cpp \
    inventory.cpp \
    enemy.cpp \
    about.cpp \
    food.cpp \
    weapon.cpp \
    gameprogress.cpp \
    rooms/begin_room.cpp \
    newmainwindow.cpp \
    messagedialog.cpp \
    Room.cpp \
    fight.cpp

HEADERS  += player.h \
    item.h \
    inventory.h \
    enemy.h \
    about.h \
    food.h \
    weapon.h \
    gameprogress.h \
    rooms/begin_room.h \
    newmainwindow.h \
    messagedialog.h \
    Room.h \
    fight.h

FORMS    += about.ui \
    rooms/begin_room.ui \
    newmainwindow.ui \
    messagedialog.ui \
    fight.ui
