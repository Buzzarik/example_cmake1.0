Структура проекта
![[Drawing 2024-12-03 20.03.39.excalidraw]]
main.cpp
```c++
#include "../mylib/include/lib.hpp"

int main(){
	print();
	return 0;
}
```
Даже, если мы делаем библиотеки, все равно надо прописать путь к заголовкам
lib.hpp
```c++
#pragma once
void print();
```
lib.cpp
```c++
#include "../include/lib.hpp"
#include <iostream>

void print(){
	std::cout << "Hello, world!?!?" << std::endl;
}
```
mylib/CMakeLists.txt
```bash
cmake_minimum_required(VERSION 3.30)
project(MyLib)

set(SOURCES src/lib.cpp)

add_library(MyLib STATIC ${SOURCES})

target_include_directories(MyLib PUBLIC include)
```
CMakeLists.txt
```bash
cmake_minimum_required(VERSION 3.30)

project(hello_world)

set(SOURCE_EXE src/main.cpp)

include_directories(mylib)

add_executable(main ${SOURCE_EXE})
  
add_subdirectory(MyLib)
  
target_link_libraries(main MyLib)
```
Функции
- [cmake_minimum_required](cmake_minimum_required.md)
- [project](project.md)
- [set](set.md)
- [add_library](add_library.md)
- [target_include_directories](target_include_directories.md)
- [include_directories](include_directories.md)
- [add_executable](add_executable.md)
- [target_link_libraries](target_link_libraries.md)
- [add_subdirectory](add_subdirectory.md)