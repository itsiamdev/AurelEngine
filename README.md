# AurelEngine

AurelEngine is a C++ game engine project built with CMake.

## Requirements

- CMake 3.20 or newer
- A C++20 compiler

## Build

From the project root, configure and build with:

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

The engine core is in `include/AurelEngine` and `src/Engine.cpp`. The
executable entry point is `src/main.cpp`. No graphics or platform-specific
library is selected yet.