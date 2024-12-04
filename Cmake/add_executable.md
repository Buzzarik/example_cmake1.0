Функция, которая создает исполняемый файл из зависимых файлов
```bash
add_executable(main files)
```
main - название исполняемого файла (./main)
files - файлы, которые надо объединить для сборки
То есть можно не создавать библиотеки , а просто связать все .cpp файлы
```bash
set(SOURCE main.cpp foo.cpp doo.cpp)
add_executable(main ${SOURCE})
```