
# Stack Implementations in C++

This project demonstrates different stack implementations in C++ using **Array**, **Vector**, and **Single Linked List** as underlying data structures. It provides a comparison between these implementations and allows users to choose between them by selecting the appropriate executable.

## Table of Contents

1. [Project Overview](#project-overview)
2. [Stack Implementations](#stack-implementations)
   - [Array-based Stack](#array-based-stack)
   - [Vector-based Stack](#vector-based-stack)
   - [Single Linked List-based Stack](#single-linked-list-based-stack)
3. [Build Instructions](#build-instructions)
4. [Usage Instructions](#usage-instructions)
5. [Project Structure](#project-structure)
6. [License](#license)

---

## Project Overview

This project implements a stack using three different data structures:
- **Array**
- **Vector**
- **Single Linked List**

Each implementation provides the following basic stack operations:
- `push(value)`: Adds an element to the stack.
- `pop()`: Removes and returns the top element of the stack.
- `peek()`: Returns the top element without removing it.
- `isEmpty()`: Checks whether the stack is empty.

---

## Stack Implementations

### Array-based Stack
The array-based stack implementation uses a fixed-size array to store elements. The array size is defined at the time of stack creation. This implementation may suffer from overflow if the stack exceeds its capacity.

### Vector-based Stack
The vector-based stack uses a dynamic array (vector) to store elements. The size of the vector can grow dynamically, avoiding overflow issues. However, resizing the vector can incur overhead during reallocation.

### Single Linked List-based Stack
The single linked list-based stack uses nodes, where each node stores an element and a reference to the next node. This implementation avoids fixed size limitations and allows the stack to grow or shrink dynamically with no memory reallocation.

---

## Build Instructions

To build the project, you can use CMake to generate the build system.

### 1. Clone the repository
```
git clone https://your-repository-url.git
cd your-repository-directory
```

### 2. Create the build directory and run CMake
```
mkdir build
cd build
cmake ..
make
```

### 3. Build outputs
After building the project, the following binaries will be available in the `bin/` directory:
- `array_stack`: Executable for the array-based stack.
- `vector_stack`: Executable for the vector-based stack.
- `singlelinkedlist_stack`: Executable for the single linked list-based stack.

---

## Usage Instructions

### 1. Running the array-based stack
To run the array-based stack:
```
./bin/array_stack
```

### 2. Running the vector-based stack
To run the vector-based stack:
```
./bin/vector_stack
```

### 3. Running the single linked list-based stack
To run the single linked list-based stack:
```
./bin/singlelinkedlist_stack
```

---

## Project Structure

```
├── CMakeLists.txt
├── Stack.h
├── StackArray.cpp
├── StackVector.cpp
├── build
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── Makefile
│   ├── bin
│   │   ├── array_stack
│   │   ├── vector_stack
│   │   └── singlelinkedlist_stack
├── main.cpp
└── singlelinkedlist
    ├── CMakeLists.txt
    ├── Stack.cpp
    ├── Stack.h
    └── main.cpp
```

### Description of Files:
- **CMakeLists.txt**: Configures the build system for the entire project and subprojects.
- **Stack.h**: Header file containing the interface for the stack operations.
- **StackArray.cpp**: Implementation of the stack using an array.
- **StackVector.cpp**: Implementation of the stack using a vector.
- **Stack.cpp**: Implementation of the stack using a single linked list.
- **main.cpp**: Common main file for interacting with the stack.
- **singlelinkedlist/main.cpp**: Main file for the single linked list implementation.

---

## License

This project is open-source and licensed under the MIT License.

