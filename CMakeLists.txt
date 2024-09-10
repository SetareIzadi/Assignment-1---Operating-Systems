cmake_minimum_required(VERSION 3.29)
project(Assignment_1___Operating_Systems C)

set(CMAKE_C_STANDARD 11)

include_directories(assignment_1)

add_executable(Assignment_1___Operating_Systems
    assignment_1/io.c
    assignment_1/io.h
    assigntment_1/main.c)
#Removed io_demo.c to only have one main function while running