# Generated from embeddeddialogs.pro.

cmake_minimum_required(VERSION 3.14)
project(embeddeddialogs LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/widgets/graphicsview/embeddeddialogs")

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Widgets)

add_qt_gui_executable(embeddeddialogs
    customproxy.cpp customproxy.h
    embeddeddialog.cpp embeddeddialog.h embeddeddialog.ui
    main.cpp
)
target_link_libraries(embeddeddialogs PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Widgets
)


# Resources:
set(embeddeddialogs_resource_files
    "No-Ones-Laughing-3.jpg"
)

qt6_add_resources(embeddeddialogs "embeddeddialogs"
    PREFIX
        "/"
    FILES
        ${embeddeddialogs_resource_files}
)

install(TARGETS embeddeddialogs
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
