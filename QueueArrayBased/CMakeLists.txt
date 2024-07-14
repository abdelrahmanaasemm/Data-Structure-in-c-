cmake_minimum_required(VERSION 3.24)
project(QueueArrayBased C)

set(CMAKE_C_STANDARD 11)

add_executable(QueueArrayBased main.c Queue.c Queue.h)
