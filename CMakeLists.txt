cmake_minimum_required(VERSION 3.31)
project(clox C)

set(CMAKE_C_STANDARD 11)

add_executable(clox main.c chunk.c memory.c debug.c chunk.h common.h debug.h memory.h
        value.h
        value.c
        vm.h
        vm.c)