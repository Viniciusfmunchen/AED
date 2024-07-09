cmake_minimum_required(VERSION 3.28)
project(imprime_inteiros C)

set(CMAKE_C_STANDARD 99)

add_executable(imprime_inteiros main.c
        imprime_inteiros.h
        imprime_inteiros.c)
