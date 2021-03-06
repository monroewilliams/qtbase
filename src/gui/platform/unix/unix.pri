SOURCES += \
    platform/unix/qunixeventdispatcher.cpp \
    platform/unix/qgenericunixeventdispatcher.cpp

HEADERS += \
    platform/unix/qunixeventdispatcher_qpa_p.h \
    platform/unix/qgenericunixeventdispatcher_p.h


qtConfig(glib) {
    SOURCES += platform/unix/qeventdispatcher_glib.cpp
    HEADERS += platform/unix/qeventdispatcher_glib_p.h
    QMAKE_USE_PRIVATE += glib
}

if(unix:!uikit)|qtConfig(xcb) {
    SOURCES += \
        platform/unix/qgenericunixservices.cpp
    HEADERS += \
        platform/unix/qgenericunixservices_p.h

    qtHaveModule(dbus): QT_PRIVATE += dbus
}

if(unix:!uikit:!macos)|qtConfig(xcb) {
    SOURCES += \
        platform/unix/qgenericunixthemes.cpp
    HEADERS += \
        platform/unix/qgenericunixthemes_p.h

    qtHaveModule(dbus) {
        include(dbusmenu/dbusmenu.pri)
        qtConfig(systemtrayicon): include(dbustray/dbustray.pri)
    }
}
