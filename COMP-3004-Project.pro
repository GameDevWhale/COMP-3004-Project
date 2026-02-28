QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core/controller/logincontrol.cpp \
    main.cpp \
    mainwindow.cpp \
    pages/admindashboardpage/admindashboardpage.cpp \
    pages/loginpage/loginpage.cpp \
    pages/marketschedulepage/marketschedulepage.cpp \
    pages/operatordashboardpage/operatordashboardpage.cpp \
    pages/vendordashboard/vendordashboard.cpp \
    pages/vendordashboardpage/vendordashboardpage.cpp

HEADERS += \
    core/controller/logincontrol.h \
    mainwindow.h \
    pages/admindashboardpage/admindashboardpage.h \
    pages/loginpage/loginpage.h \
    pages/marketschedulepage/marketschedulepage.h \
    pages/operatordashboardpage/operatordashboardpage.h \
    pages/vendordashboard/vendordashboard.h \
    pages/vendordashboardpage/vendordashboardpage.h

FORMS += \
    mainwindow.ui \
    pages/admindashboardpage/admindashboardpage.ui \
    pages/loginPage/loginpage.ui \
    pages/loginpage/loginpage.ui \
    pages/marketschedulepage/marketschedulepage.ui \
    pages/operatordashboardpage/operatordashboardpage.ui \
    pages/vendordashboard/vendordashboard.ui \
    pages/vendordashboardpage/vendordashboardpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
