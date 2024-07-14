cmake_minimum_required(VERSION 3.24)
project(StackByQueue C)

set(CMAKE_C_STANDARD 11)

add_executable(StackByQueue main.c Queue.c Queue.h Stack.h Stack.c)
