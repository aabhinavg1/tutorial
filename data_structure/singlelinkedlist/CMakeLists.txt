# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Project Name
project(LinkedListExample)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 11)

# Add the source files
add_executable(LinkedListExample src/main.cpp src/LinkedList.cpp)
add_executable(LinkedListMenuBased src/menu_main.cpp src/LinkedList.cpp)
add_executable(LinkedListGeneric src/TemplateMain.cpp )
