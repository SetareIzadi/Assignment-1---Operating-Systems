cmake_minimum_required(VERSION 3.29)
project(Assignment_1___Operating_Systems C)

set(CMAKE_C_STANDARD 11)

include_directories(assignment_1)

add_executable(Assignment_1___Operating_Systems
    assignment_1/io.c
    assignment_1/io.h
    assignment_1/io_demo.c)
#Removed main.c to only have one main function while running

if (WIN32)
    # Windows-specific settings (if needed)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
elseif (APPLE)
    # Mac-specific settings (if needed)
    set(CMAKE_MACOSX_RPATH 1)
elseif (UNIX)
    # Linux-specific settings (if needed)
    set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()