cmake_minimum_required(VERSION 3.30)

project(hello_world)			# Название проекта

set(SOURCE_EXE src/main.cpp)		# Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB src/foo.cpp)			# Тоже самое, но для библиотеки

add_library(foo STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo

target_include_directories(foo PUBLIC src) # src - где искать заголовочные файлы

add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main

target_link_libraries(main foo)		# Линковка программы с библиотекой