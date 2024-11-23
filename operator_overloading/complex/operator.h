#ifndef OPERATOR_H
#define OPERATOR_H
#include <iostream>

class Complex {
public:
    int real, imag;

    // Operator overloading for +
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;   // Addition of real parts
        temp.imag = imag + other.imag;   // Addition of imaginary parts
        return temp;
    }
};
#endif // OPERATOR_H
