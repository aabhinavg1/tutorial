# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(LinkedListStack)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files to the project
# We include main.cpp and Stack.cpp
add_executable(LinkedListStack main.cpp Stack.cpp)

# Optionally, you can set the output directory for the compiled executable
#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
