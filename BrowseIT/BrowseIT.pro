QT       += core gui
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BrowseIT
TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    tablayout.cpp

FORMS += \
    mainwindow.ui \
    tablayout.ui

HEADERS += \
    mainwindow.h \
    tablayout.h

RESOURCES += \

