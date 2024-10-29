cmake_minimum_required(VERSION 3.5.0)
project(stack_linkedlist VERSION 0.1.0 LANGUAGES C)

add_executable(stack_linkedlist main.c stack.c)

include(CTest)
enable_testing()

