QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcircle.cpp \
    addrect.cpp \
    changecircle.cpp \
    changedocument.cpp \
    changerect.cpp \
    deletecircle.cpp \
    deleterect.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Circle.h \
    Figures.h \
    Rectangle.h \
    VectorDocument.h \
    addcircle.h \
    addrect.h \
    changecircle.h \
    changedocument.h \
    changerect.h \
    deletecircle.h \
    deleterect.h \
    mainwindow.h

FORMS += \
    addcircle.ui \
    addrect.ui \
    changecircle.ui \
    changedocument.ui \
    changerect.ui \
    deletecircle.ui \
    deleterect.ui \
    mainwindow.ui

TRANSLATIONS += \
    Laba11_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
