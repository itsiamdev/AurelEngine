# AurelEngine

AurelEngine is a C++ game engine project built with CMake.

## Requirements

- CMake 3.20 or newer
- A C++20 compiler
- SDL3 development files and CMake package configuration

## Build

Install SDL3 using a package manager or SDK that provides its CMake package, then
configure and build from the project root:

```powershell
cmake -S . -B build
cmake --build build --config Release
```

Run the executable:

```powershell
.\build\Release\AurelEngine.exe
```

For single-configuration generators, the executable is produced at
`build/AurelEngine.exe`.

The engine core is in `include/AurelEngine` and `src/Engine.cpp`. The SDL3
window wrapper is in `engine/include/devy/Window.hpp` and `src/Window.cpp`.
The executable entry point is `src/main.cpp`.
