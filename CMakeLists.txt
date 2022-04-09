cmake_minimum_required(VERSION 3.14)

project(CoreBeginer1140 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(CoreBeginer1140
  main.cpp radio.h radio.cpp station.h station.cpp
)
target_link_libraries(CoreBeginer1140 Qt${QT_VERSION_MAJOR}::Core)
