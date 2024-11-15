# Simple Calculator in C++

This is a simple C++ calculator project that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. It is organized with separate `src` and `include` directories and is built using CMake.

---

## Features

- **Addition**  
- **Subtraction**  
- **Multiplication**  
- **Division** (with error handling for division by zero)  

---

## Project Structure  

```
Calculator/
├── CMakeLists.txt
├── README.md
├── include/
│   └── Calculator.h
├── src/
│   ├── Calculator.cpp
│   └── main.cpp
```

### Why This Structure?

1. **Separation of Concerns**:  
   - The `include` directory contains the header files for declaring classes and functions.  
   - The `src` directory contains the implementation files (`.cpp`) for these declarations and the `main.cpp` file for user interaction.  
   This separation makes the code easier to navigate, maintain, and extend.

2. **Scalability**:  
   - As projects grow, having a clear directory structure helps developers add or modify files without confusion.  
   - The modular structure enables easy testing and reuse of individual components.

3. **CMake Integration**:  
   - By organizing source and header files into directories, CMake can include and link them effectively.  

---

## Why Do We Need the `CMakeLists.txt` File?

The `CMakeLists.txt` file is the configuration file for CMake, which automates the build process. Here's why it's important:

1. **Cross-Platform Compatibility**:  
   CMake generates platform-specific build files (e.g., Makefiles for Linux, Visual Studio projects for Windows).  
   
2. **Simplified Build Process**:  
   It simplifies the compilation process by defining how to locate and compile the files.  

3. **Maintainability**:  
   Instead of manually configuring builds for different environments, a single `CMakeLists.txt` file can handle everything.  

### Key Features in This Project:

1. **Minimum Required CMake Version**:  
   The line `cmake_minimum_required(VERSION 3.10)` ensures compatibility with modern CMake features.

2. **Project Name**:  
   `project(Calculator)` names the project for better build system management.

3. **C++ Standard**:  
   The setting `CMAKE_CXX_STANDARD 11` enforces the use of C++11, ensuring portability and modern features.

4. **Include Directories**:  
   The `include_directories(include)` command ensures the compiler knows where to find the header files.

5. **Source Files**:  
   The `add_executable` command combines all `.cpp` files into a single executable named `Calculator`.

---

## Prerequisites

- C++ compiler (e.g., g++)
- CMake (version 3.10 or higher)

---

## Building and Running the Project

### 1. Clone or Download the Repository

Clone this repository or download the files to your local machine.

### 2. Create a Build Directory

Navigate to the project root in your terminal and create a `build` directory:

```bash
mkdir build
cd build
```

### 3. Run CMake

Generate the build files using CMake:

```bash
cmake ..
```

### 4. Compile the Program

Build the project with:

```bash
cmake --build .
```

### 5. Run the Program

Run the compiled executable:

```bash
./Calculator
```

---

## Usage

The program prompts you to enter an operation in the format:

```
number1 operator number2
```

### Example

Input:
```
4.5 + 2.3
```

Output:
```
Result: 6.8
```

Supported operators:
- `+` for addition
- `-` for subtraction
- `*` for multiplication
- `/` for division

---

## License

This project is open-source and free to use.