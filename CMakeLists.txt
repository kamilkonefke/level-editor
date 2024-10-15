cmake_minimum_required(VERSION 3.30)

project(level-editor)

find_package(SDL2 REQUIRED)

add_executable(level-editor src/main.c 
    src/gfx.c 
    src/gfx.h
    src/editor.c
    src/editor.h
)

target_link_libraries(level-editor ${SDL2_LIBRARIES})
include_directories(${SDL2_INCLUDE_DIRS})

add_compile_options(-Wall -W3)
