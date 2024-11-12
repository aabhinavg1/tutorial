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
