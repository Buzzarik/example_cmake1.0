## [CreateSimpleProject](CreateSimpleProject.md)
## [CreateProjectWithOneLibrary](CreateProjectWithOneLibrary.md)
## [CreateProjectWithSubDirectory](CreateProjectWithSubDirectory.md)
## [CreateProjectWithLibraries](CreateProjectWithLibraries.md)
## [StartDebugCmakeWithVScode](StartDebugCmakeWithVScode.md)
Чтобы вводить данные в отладке лучший способ просто создать в программе считывание из файла и сделать ввод из файла!!!
Пример
```
#include <iostream> 
#include <fstream> 
#include <string> 

int main() { 
	std::ifstream inputFile("input.txt"); 
	std::string line; 
	while (std::getline(inputFile, line)) { 
		std::cout << "Строка из файла: " << line << std::endl; 
	} return 0; 
}
```