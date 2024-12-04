cmake_minimum_required(VERSION 3.15)
project(libB)

add_library(libB STATIC src/libB.cpp)
target_include_directories(libB PUBLIC include)
target_link_libraries(libB PUBLIC libA)