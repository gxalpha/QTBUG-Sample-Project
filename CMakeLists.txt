cmake_minimum_required(VERSION 3.5)

project(QTBUG-Sample-Project VERSION 1.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        basicwindow.cpp
        basicwindow.h
        basicwindow.ui
)

qt_add_executable(QTBUG-Sample-Project
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

target_link_libraries(QTBUG-Sample-Project PRIVATE Qt6::Widgets)

set_target_properties(QTBUG-Sample-Project PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.sample-project
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

qt_finalize_executable(QTBUG-Sample-Project)
