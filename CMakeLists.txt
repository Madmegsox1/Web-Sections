cmake_minimum_required(VERSION 3.22)
project(webSections)

set(CMAKE_CXX_STANDARD 14)

add_executable(webSections main.cpp engine.cpp engine.h task_factory.cpp task_factory.h helper.cpp helper.h)
