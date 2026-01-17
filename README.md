# <p style="text-align:center">这是我的编程作业的备份</p>
#### launch.json
```json
{
    "configurations": [
    {
        "name": "(gdb) 启动",
        "type": "cppdbg",
        "request": "launch",
        "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
        "args": [],
        "stopAtEntry": false,
        "cwd": "${fileDirname}",
        "environment": [],
        "externalConsole": false,
        "MIMode": "gdb",
        "miDebuggerPath": "C:/mingw64/bin/gdb.exe",
        "preLaunchTask":"C/C++: g++.exe 生成活动文件" 
    }
    ]
}
```
---
#### tasks.json
```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe 生成活动文件",
            "command": "C:\\mingw64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "调试器生成的任务。"
        },
        {
            "label": "运行C/C++活动文件",
            "type": "shell",
            "command": "${fileDirname}\\${fileBasenameNoExtension}.exe",
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": []
        }
    ],
    "version": "2.0.0"
}
```
---
<p style="text-align:center">E-·-N-·-D</p>
