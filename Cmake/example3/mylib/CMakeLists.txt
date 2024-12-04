cmake_minimum_required(VERSION 3.30)

project(MyLib)

set(SOURCES src/lib.cpp)

add_library(MyLib STATIC ${SOURCES})

target_include_directories(MyLib PUBLIC include)