
# C++ and CMake Tutorial

Welcome to the **C++ and CMake Tutorial** repository! This repository provides a step-by-step guide to learning C++ with a focus on building, compiling, and managing projects with **CMake**. It is structured to help both beginners and intermediate developers improve their skills in C++ development while mastering CMake, a powerful build system generator.

---

## Table of Contents

- [About](#about)
- [Getting Started](#getting-started)
- [Tutorial Structure](#tutorial-structure)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## About

This repository aims to teach **C++** programming concepts alongside **CMake**. Each section includes explanations, code examples, and exercises to reinforce learning. By the end of this tutorial, you'll have a solid foundation in both C++ programming and using CMake for project building and dependency management.

---

## Getting Started

To get started, clone this repository to your local machine:

```bash
git clone https://github.com/aabhinavg1/tutorial.git
cd tutorial
```

---

## Tutorial Structure

This repository is organized as follows:

1. **Basics of C++**
    - Variables, Data Types, and Operators
    - Control Structures: Loops and Conditionals
    - Functions and Scope
    {These topic you should be aware of to know more I will mostly cover from part 2}

2. **Object-Oriented Programming (OOP) in C++**
    - Classes and Objects
    - Inheritance, Polymorphism, and Encapsulation
    - Constructors and Destructors

3. **Advanced C++ Concepts**
    - Templates and STL (Standard Template Library)
    - Lambda Functions and Modern C++ Features
    - Exception Handling

4. **Introduction to CMake**
    - What is CMake and Why Use It?
    - Writing Your First CMakeLists.txt
    - Managing Dependencies with CMake

5. **Building C++ Projects with CMake**
    - Compiling and Linking
    - Using CMake for Cross-Platform Development
    - Integrating Third-Party Libraries with CMake

---

## Prerequisites

Before starting this tutorial, ensure you have the following installed:

- **C++ Compiler** (e.g., GCC, Clang, or MSVC)
- **CMake** (version 3.10 or higher)

To check if you have CMake installed, run:

```bash
cmake --version
```

If it’s not installed, follow [this guide](https://cmake.org/install/) to install CMake.

---

## Installation

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/aabhinavg1/tutorial.git
   cd tutorial
   ```

2. **Build a Sample Project**:

   Each tutorial folder contains its own `CMakeLists.txt`. You can navigate into any tutorial directory and run the following commands:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. **Run the Program**:

   Once built, run the executable:

   ```bash
   ./your_executable_name
   ```

---

## Usage

Each tutorial section is self-contained and includes code samples and explanations. You can explore each section to learn specific C++ and CMake concepts. 

For example:
- To explore the C++ class, navigate to the `class/` directory.
- Each folder is name wit the topic name please visit each folder
Each section includes code files and a `CMakeLists.txt` to help you build and run examples.

---

## Contributing

Contributions are welcome! If you’d like to add new topics, fix bugs, or improve explanations, please fork the repository and submit a pull request. Be sure to follow the existing structure and maintain consistency.

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Acknowledgments

Thanks to the open-source community for providing tools and resources that make tutorials like this possible. Happy coding!
