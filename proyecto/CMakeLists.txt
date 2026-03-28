cmake_minimum_required(VERSION 3.10)
project(PanelSolarProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(PanelSolarApp
    src/main.cpp
    src/PanelSolar.cpp
)