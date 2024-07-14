cmake_minimum_required(VERSION 3.24)
project(QueueByStack C)

set(CMAKE_C_STANDARD 11)

add_executable(QueueByStack main.c Stack.h Stack.c Queue.h Queue.c)
