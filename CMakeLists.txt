cmake_minimum_required(VERSION 3.22)
project(so_long C)

set(CMAKE_C_STANDARD 11)

include_directories(includes)

add_executable(so_long
        includes/so_long.h
        src/main.c)
