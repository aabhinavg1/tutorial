# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(Calculator)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add executable
add_executable(Calculator src/main.cpp src/Calculator.cpp)
