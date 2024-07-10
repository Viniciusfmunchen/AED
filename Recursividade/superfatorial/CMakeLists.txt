cmake_minimum_required(VERSION 3.28)
project(superfatorial C)

set(CMAKE_C_STANDARD 99)

add_executable(superfatorial main.c
        superfatorial.h
        superfatorial.c)
