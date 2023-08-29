include (../../shared.pri)
TEMPLATE = subdirs
SUBDIRS = \
    stemmer

contains(QMAKE_COMPILER_DEFINES, _MSC_VER=1600) {
    # MSVC 2010
    SUBDIRS += legacy
}
else:contains(QMAKE_COMPILER_DEFINES, _MSC_VER=1916) {
    # MSVC 2017
    SUBDIRS += legacy
}
else {
    SUBDIRS += spatialindexnavel
}

!r_no_opennurbs {
    SUBDIRS += opennurbs
}
!rs_no_dxf {
    SUBDIRS += dxflib
}

!r_mobile {
    exists(qt-labs-qtscriptgenerator-$${QT_VERSION}) {
        SUBDIRS += qt-labs-qtscriptgenerator-$${QT_VERSION}
    }
    else {
        lessThan(QT_MAJOR_VERSION, 6) {
            error("Script bindings not available for Qt version $${QT_VERSION}. You can add them to src/3rdparty/qt-labs-qtscriptgenerator-$${QT_VERSION} or use another version of Qt.")
        }
    }
}
