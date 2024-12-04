cmake_minimum_required(VERSION 3.30) # Проверка версии CMake.
									# Если версия установленной программы
									# старее указаной, произойдёт аварийный выход.

project(hello_world)				# Название проекта

set(SOURCE_EXE src/main.cpp)			# Установка переменной со списком исходников

include_directories(mylib)			# Расположение заголовочных файлов

add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main

add_subdirectory(MyLib)				# Добавление подпроекта, указывается имя дирректории

target_link_libraries(main MyLib)		# Линковка программы с библиотекой