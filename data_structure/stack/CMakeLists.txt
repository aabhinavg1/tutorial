cmake_minimum_required(VERSION 3.10)

# Project name
project(StackExample)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the directory for binary output
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Option to build with array-based or vector-based stack
option(USE_ARRAY_STACK "Build with Array-based Stack" ON)
option(USE_VECTOR_STACK "Build with Vector-based Stack" ON)

# Add the common source for main.cpp and shared header
if(USE_ARRAY_STACK)
    add_executable(array_stack main.cpp Stack.h StackArray.cpp)
endif()

if(USE_VECTOR_STACK)
    add_executable(vector_stack main.cpp Stack.h StackVector.cpp)
endif()
