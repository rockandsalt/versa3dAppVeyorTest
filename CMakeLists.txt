cmake_minimum_required(VERSION 2.8)

project(Versa3dVer2)



set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)

SET(SRC main.cpp)

SET(UI_SRC ${PROJECT_SOURCE_DIR}/GUI/mainWindow.cpp)
SET(UI_HDR ${PROJECT_SOURCE_DIR}/GUI/mainWindow.h)

SET(SRC main.cpp)
SET(SRC_HDR )

add_executable(${PROJECT_NAME} ${SRC} ${SRC_HDR} ${UI_SRC} ${UI_HDR})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
