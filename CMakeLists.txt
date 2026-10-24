cmake_minimum_required(VERSION 3.20)

project(AurelEngine VERSION 0.1.0 LANGUAGES CXX)

add_library(AurelEngineCore
    src/Engine.cpp
)

target_include_directories(AurelEngineCore
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(AurelEngineCore PUBLIC cxx_std_20)

add_executable(AurelEngine
    src/main.cpp
)

target_link_libraries(AurelEngine PRIVATE AurelEngineCore)

if(MSVC)
    target_compile_options(AurelEngineCore PRIVATE /W4 /permissive-)
    target_compile_options(AurelEngine PRIVATE /W4 /permissive-)
else()
    target_compile_options(AurelEngineCore PRIVATE -Wall -Wextra -Wpedantic)
    target_compile_options(AurelEngine PRIVATE -Wall -Wextra -Wpedantic)
endif()
