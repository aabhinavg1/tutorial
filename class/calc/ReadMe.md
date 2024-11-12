
# Calculator Class Tutorial

This tutorial introduces a simple **Calculator** class in C++ that supports basic arithmetic operations: addition, subtraction, multiplication, and division.

---

## What is a Class?

In C++, a **class** is a blueprint for creating objects (instances of that class). It defines the data and methods that an object can have. Classes allow for organizing code into reusable, modular units and make it easy to work with complex data and functionality by grouping them into single entities.

### Understanding a Class as a Blueprint in Object-Oriented Programming

In object-oriented programming (OOP), a **class** serves as a **blueprint** for creating objects. Just as a blueprint for a building provides a detailed plan for construction, a class defines the structure and behavior of the objects created from it. This includes the data the object will hold and the actions it can perform.

### Blueprint Concept Explained

A **blueprint**:
1. Specifies **attributes** (variables) that each object will have, determining what data it can hold.
2. Defines **methods** (functions) that describe the actions the object can take, determining how it behaves.

A class itself does not represent a real-world object; it simply provides a model. Only when an **object** is created from the class does it become a functional instance that can hold data and perform actions.

## What is an Object?

An **object** is an instance of a class, meaning it is a specific example created from the blueprint defined by the class. Each object has its own data and can perform the actions described by the methods in the class.

### How to Create an Object

To create an object in C++, you declare it using the class name followed by the object name. For example, if you have a class named `Calculator`, you can create an object named `calc` as follows:

```cpp
Calculator calc; // Creates an object named 'calc' of type 'Calculator'
```

This line of code uses the `Calculator` class to create an instance of a calculator, which can then perform arithmetic operations.

---

## How to Create a Class in C++

Defining a class in C++ involves using the `class` keyword, followed by the class name, and then defining its members (variables and methods) within curly braces `{ }`. 

```cpp
class ClassName {
public:
    // Variables and methods go here
};
```

### Example: Creating a Simple Calculator Class

The following code demonstrates how to create a `Calculator` class with methods for basic arithmetic operations:

```cpp
class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return b != 0 ? a / b : 0; }
};
```

---

## Why Use a Class?

- **Encapsulation**: Classes help to encapsulate data and functions, keeping related functionality together.
- **Reusability**: Once defined, a class can be used to create multiple objects with similar properties and behaviors.
- **Abstraction**: Classes help hide unnecessary details and expose only relevant methods to the user.
- **Modularity**: Divides functionality into separate units that can be individually developed, tested, and maintained.

## Example: Using the Calculator Class

Here's a complete example that demonstrates creating a `Calculator` object and performing arithmetic operations.

```cpp
#include <iostream>
using namespace std;

// Define a Calculator class
class Calculator {
public:
    // Method for addition
    double add(double a, double b) {
        return a + b;
    }

    // Method for subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Method for multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Method for division
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;  // Create an object of the Calculator class
    double num1, num2;
    char op;

    cout << "Enter an operation in the format: number1 operator number2" << endl;
    cout << "Supported operators: +, -, *, /" << endl;
    cout << "Example: 4.5 + 2.3" << endl;

    // User inputs the values and operator
    cin >> num1 >> op >> num2;

    double result = 0;

    // Perform the calculation based on the operator
    switch (op) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
```

---

## Usage

1. **Compile the Code**: Use the following command to compile the code.
   ```bash
   clang++ -o calculator calculator.cpp
   ```

2. **Run the Program**: After compiling, you can run the program.
   ```bash
   ./calculator
   ```

3. **Provide Input**: The program will prompt you to enter a calculation in the format:
   ```
   number1 operator number2
   ```
   Example:
   ```
   4.5 * 2.3
   ```

4. **Supported Operators**:
   - `+` for addition
   - `-` for subtraction
   - `*` for multiplication
   - `/` for division

5. **Error Handling**: If division by zero is attempted, the program will display an error message.

---

## Example Execution

### Input
```
Enter an operation in the format: number1 operator number2
Supported operators: +, -, *, /
Example: 4.5 + 2.3
4.5 * 2.3
```

### Output
```
Result: 10.35
```

---

## Notes

- This example serves as a basic introduction to C++ classes, methods, and simple arithmetic operations.
- Further enhancements could include handling more operators, adding more error-checking mechanisms, or implementing input validation.

Happy coding!
