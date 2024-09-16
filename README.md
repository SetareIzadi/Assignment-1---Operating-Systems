# Assignment 1

## Overview
This project is a simple command-line program written in C that stores numbers based on commands received from standard input (stdin). The primary goal is to refresh C programming skills and introduce system call semantics by using Unix read and write system calls directly.

## Features
- **Dynamic Memory Allocation**: The program dynamically allocates memory to manage the number storage system, ensuring flexibility in handling an unknown number of inputs.
- **Command Interpreter**: The program reads commands from stdin and performs actions based on them, manipulating an integer counter and a collection of integers.
- **System Calls**: Utilizes Unix system calls for reading and writing, bypassing the standard I/O library.

## Commands
- **'a'**: Add the current counter value to the collection, then increment the counter.
- **'b'**: Increment the counter without adding to the collection.
- **'c'**: Remove the most recently added element from the collection and increment the counter.
- **Any other character**: Stop processing commands, print the current collection, and exit.

## Learning Objectives
- Understand the role of the compiler, assembler, and linker in creating executables.
- Apply standard programming methodologies and tools such as test-driven development, build systems, and debuggers.
- Implement C programs using pointers, arrays, structs, memory management, and low-level I/O.
- Develop C applications that utilize the system call interface of an operating system.

## Setup and Usage
1. **Environment Setup**: Ensure a Unix or Posix-compliant environment (e.g., Linux, MacOS) is set up.
2. **Building the Program**: Use the provided Makefile to compile the program.
   
`make`

## Project Files and Features

### Branch: `task-1`
- **io.h**: Prototypes and definitions for reading and writing without `<stdio.h>`.
- **io.c**: Implementations of functions using system calls from `<unistd.h>`.
- **io_demo.c**: Demonstration program to test I/O functions.
- **Makefile**: Build script for compiling the program.

### Branch: `task-2`
- **main.c**: Command interpreter that processes commands:
    - **'a'**: Add counter value to collection, increment counter.
    - **'b'**: Increment counter without adding to collection.
    - **'c'**: Remove the most recent element from the collection, increment counter.
    - **Any other character**: Stop processing, print collection, and exit.
- **Makefile**: Build script for compiling the program.
- **test.sh**: Bash script for testing the command interpreter.

### Running the Program:
Execute the program and provide commands via stdin.
`./main`

### Files
- io.h: Prototypes and definitions for reading and writing without using <stdio.h>.
- io.c: Implementations of the functions defined in io.h.
- io_demo.c: Demonstrates and tests the I/O functions.
- main.c: Implements the command interpreter.
- Makefile: Builds the program.
- test.sh: Bash script for testing the command interpreter.

### Testing
Run the provided test script to verify the functionality of the command interpreter:
`make test`

### Authors
**Group 32:**
- Setare Izadi - s232629
- Aisha Farah - s235123
- Sarah Dimovski - s235087
- Kasparas Marcinskas - s235116 