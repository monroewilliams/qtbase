# Generated from dnslookup.pro.

cmake_minimum_required(VERSION 3.14)
project(dnslookup LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(INSTALL_EXAMPLEDIR "examples/network/dnslookup")

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Network)

add_executable(dnslookup
    dnslookup.cpp dnslookup.h
)
target_link_libraries(dnslookup PUBLIC
    Qt::Core
    Qt::Network
)

install(TARGETS dnslookup
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
