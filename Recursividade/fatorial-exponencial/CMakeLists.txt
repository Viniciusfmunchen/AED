cmake_minimum_required(VERSION 3.28)
project(fatorial_exponencial C)

set(CMAKE_C_STANDARD 99)

add_executable(fatorial_exponencial main.c
        fatorial_exponencial.h
        fatorial_exponencial.c)
