cmake_minimum_required(VERSION 3.15)
project(libD)

add_library(libD STATIC src/libD.cpp)
target_include_directories(libD PUBLIC include)
target_link_libraries(libD PUBLIC libB libC)