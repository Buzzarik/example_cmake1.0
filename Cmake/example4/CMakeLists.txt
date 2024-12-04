cmake_minimum_required(VERSION 3.15)
project(MyProject)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(libA)
add_subdirectory(libB)
add_subdirectory(libC)
add_subdirectory(libD)
add_subdirectory(app)