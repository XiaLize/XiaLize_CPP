# <p style="text-align:center">这是我的编程作业的备份</p>


# 框架
#### c++
```cpp
#include<bits/stdc++.h>
#define db double
#define ll long long
#define el endl
using namespace std;
int main()
{
	
}
```
```cpp
//1开始
for(int i = 1;i <= n;i++)
{

}
```
```cpp
//0开始
for(int i = 0;i < n;i++)
{

}
```
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
