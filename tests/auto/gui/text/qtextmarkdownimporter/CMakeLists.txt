# Generated from qtextmarkdownimporter.pro.

#####################################################################
## tst_qtextmarkdownimporter Test:
#####################################################################

# Collect test data
list(APPEND test_data "data/thematicBreaks.md")
list(APPEND test_data "data/headingBulletsContinuations.md")
list(APPEND test_data "data/fuzz20450.md")
list(APPEND test_data "data/fuzz20580.md")

add_qt_test(tst_qtextmarkdownimporter
    SOURCES
        tst_qtextmarkdownimporter.cpp
    DEFINES
        SRCDIR=\\\"${CMAKE_CURRENT_SOURCE_DIR}\\\"
    PUBLIC_LIBRARIES
        Qt::CorePrivate
        Qt::Gui
        Qt::GuiPrivate
    TESTDATA ${test_data}
)
