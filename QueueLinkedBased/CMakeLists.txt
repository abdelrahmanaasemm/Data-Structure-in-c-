cmake_minimum_required(VERSION 3.24)
project(QueueLinkedBased C)

set(CMAKE_C_STANDARD 11)

add_executable(QueueLinkedBased main.c Queue.c Queue.h)
