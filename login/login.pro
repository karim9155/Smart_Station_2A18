QT       += core gui sql network printsupport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bus.cpp \
    connection.cpp \
    employes/employe.cpp \
    employes/mainwindow1.cpp \
    employes/smtp.cpp \
    main.cpp \
    maindialog.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    reparation/mainwindow2.cpp \
    reparation/reparation.cpp \
    tickets/dialogticket.cpp \
    tickets/mainwindow3.cpp \
    tickets/stat_combo.cpp \
    tickets/ticket.cpp \
    window.cpp

HEADERS += \
    bus.h \
    connection.h \
    employes/employe.h \
    employes/mainwindow1.h \
    employes/smtp.h \
    maindialog.h \
    mainwindow.h \
    qcustomplot.h \
    reparation/mainwindow2.h \
    reparation/reparation.h \
    tickets/dialogticket.h \
    tickets/mainwindow3.h \
    tickets/stat_combo.h \
    tickets/ticket.h \
    window.h

FORMS += \
    employes/mainwindow1.ui \
    maindialog.ui \
    mainwindow.ui \
    reparation/mainwindow2.ui \
    tickets/dialogticket.ui \
    tickets/mainwindow3.ui \
    tickets/stat_combo.ui \
    window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \ \ \
    login.pro

DISTFILES += \
    Atelier_Connexion.pro.user \
    Atelier_Connexion.pro.user.d567f1b.4.8-pre1 \
    employes/Atelier_Connexion1.pro.user \
    employes/Atelier_Connexion1.pro.user.60e4a72 \
    employes/Atelier_Connexion1.pro.user.d567f1b.4.8-pre1 \
    reparation/projetAmine.pro.user \
    reparation/projetAmine.pro.user.0d68ae2 \
    tickets/Hbib-QT.pro.user \
    tickets/Hbib-QT.pro.user.3ccac38 \
    tickets/Hbib-QT.pro.user.43637f8
    login.pro.user

