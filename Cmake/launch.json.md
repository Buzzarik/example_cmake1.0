```bash
{
	"version": "0.2.0",
	"configurations": [
		{
			"name": "CMAKE Debug",
			"type": "cppdbg",
			"request": "launch",
			"program": "${workspaceFolder}/build/app/main",
			"args": [],
			"stopAtEntry": false,
			"cwd": "${workspaceFolder}",
			"environment": [],
			"externalConsole": false,
			"preLaunchTask": "build_debug",
			"MIMode": "lldb",
			"setupCommands": [
				{
					"description": "Включить автоматическое форматирование для gdb",
					"text": "-enable-pretty-printing",
					"ignoreFailures": true
				}
			]
		}
	]

}
```
- `version` - указание версии конфигурации отладки
- `configurations: [ ... ]` - массив, содержащий конфигурации отладки
- `name` - имя конфигурации, которое отображается при выборе, что запустить в VS code
- `type` - указание типа отладчика. `cppdbg` - расширение в VS code для GDB, LLDB
- `program` - указания пути к исполняемому файлу
- `args: []` - список агрументов командной строки для исполняемого файла. Когда в main написаны входные данные
- `stopAtEntry` - указывает, нужно ли останавливать отладку на первой строке
- `cwd` - рабочая директория для запуска программы. Обычно все команды cmake запускаются в папке build, поэтому желательно создавать там (cmake создает много файлов для себя, которые нам не важны, чтобы не засорять структуру проекта)
- `environment: []` - массив переменных окружения, которые нужно добавить при запуске программы
- `externalConsole` - указывает, нужно ли использовать внешнюю консоль для вывода. false - вывод будет в консоли VS code
- `preLaunchTask` - имя задачи, которая будет запускаться до выполнения отладки
- `MIMide` - указывает какой отладчик используется
- `setupCommands: [ ... ]` - массив команд, которые нужно выполнить перед началом отладки. В данном случае, команда `-enable-pretty-printing` включает красивое форматирование вывода