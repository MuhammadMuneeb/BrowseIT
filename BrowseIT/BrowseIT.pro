QT       += core gui
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BrowseIT
TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    tablayout.cpp \
    toolbox.cpp \
    bookmarks.cpp

FORMS += \
    mainwindow.ui \
    tablayout.ui \
    toolbox.ui

HEADERS += \
    mainwindow.h \
    tablayout.h \
    toolbox.h \
    bookmarks.h

RESOURCES += \
    Resources.qrc

