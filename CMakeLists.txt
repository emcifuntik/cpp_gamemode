cmake_minimum_required(VERSION 2.8)
cmake_policy(VERSION 2.8)

project(cpp_example)

set(SOURCE_LIB main.cpp dllmain.cpp)
set(CMAKE_MACOSX_RPATH 1)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(gamemode SHARED ${SOURCE_LIB})
