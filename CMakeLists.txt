cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 2.8)

project(cpp_example)

set(SOURCE_LIB main.cpp dllmain.cpp)
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_BUILD_TYPE Release)
list( APPEND CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")

add_library(gamemode SHARED ${SOURCE_LIB})
