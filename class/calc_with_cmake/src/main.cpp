// src/main.cpp

#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;  // Create an object of the Calculator class
    double num1, num2;
    char op;

    std::cout << "Enter an operation in the format: number1 operator number2" << std::endl;
    std::cout << "Supported operators: +, -, *, /" << std::endl;
    std::cout << "Example: 4.5 + 2.3" << std::endl;

    // User inputs the values and operator
    std::cin >> num1 >> op >> num2;

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
            std::cout << "Invalid operator!" << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}
