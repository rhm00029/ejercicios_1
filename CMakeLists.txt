cmake_minimum_required(VERSION 4.1)
project(ejercicios_1 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(stats src/stats.c)
target_include_directories(stats PUBLIC include)

add_executable(ej1 src/ej1.c)
add_executable(ej2 src/ej2.c)
add_executable(ej3 src/ej3.c
        src/stats.c
)

target_link_libraries(ej3 PRIVATE stats m)