cmake_minimum_required(VERSION 3.20)
project(Note1_CLion)

set(CMAKE_PREFIX_PATH "C:/Qt/6.8.2/mingw_64/lib/cmake")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(SOURCES main.cpp caller.ui callermainwindow.h)

add_executable(Note1_CLion ${SOURCES})

target_link_libraries(Note1_CLion PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

