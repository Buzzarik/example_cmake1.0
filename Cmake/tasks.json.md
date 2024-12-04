```bash
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build_debug_cmake",
            "type": "shell",
            "command": "cmake",
            "args": [
                "-DCMAKE_BUILD_TYPE=Debug",
                "../"
            ],
            "options": {
                "cwd": "${workspaceFolder}/build"
            }
        },

        {
            "label": "make_debug",
            "type": "shell",
            "command": "make",
            "options": {
                "cwd": "${workspaceFolder}/build"
            }
        },

        {
            "label": "build_debug",
            "dependsOn": [
                "build_debug_cmake",
                "make_debug"
            ],
            
        }
    ]
}
```
- `label` - имя задачи, по которому можно ее вызывать
- `type` - что какая это команда (в данном случае команда shell)
- `command` - команда, которая будет выполнена
- `args: [ ... ]` - аргументы для команды (в данном случае ставится флаг debug и путь к CMakeLists.txt из папки build, см. [CreateProjectWithLibraries](CreateProjectWithLibraries.md))
- `options` - указывает опции для задачи (в данном случае, где ее надо выполнять)
- `dependsOn: [ ... ]` - указывает, что задача зависит от выполнения других задач
Чтобы создать исполняемый файл используется одна из комбинаций создания cmake + make и именно в такой последовательности.