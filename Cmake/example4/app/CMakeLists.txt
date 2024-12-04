cmake_minimum_required(VERSION 3.15)
project(app)

add_executable(main src/main.cpp)
target_link_libraries(main PUBLIC libD)