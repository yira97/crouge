cmake_minimum_required(VERSION 3.15)
PROJECT(rogue)
ADD_COMPILE_OPTIONS(-std=c++17)

INCLUDE_DIRECTORIES(include)
ADD_EXECUTABLE(${PROJECT_NAME} src/main.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ncurses)