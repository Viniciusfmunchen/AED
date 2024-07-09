cmake_minimum_required(VERSION 3.28)
project(somatorio C)

set(CMAKE_C_STANDARD 99)

add_executable(somatorio main.c
        somatorio.h
        somatorio.c)
