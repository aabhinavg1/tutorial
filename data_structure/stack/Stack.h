#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>
#include <vector>

class Stack {
private:
    int* arr;                  // Array to hold stack elements (for array implementation)
    int capacity;              // Capacity of the stack (only for array)
    int top;                   // Top index of the stack (for array implementation)
    std::vector<int> stack;    // Vector to hold stack elements (for vector implementation)

public:
    // Constructor
    Stack(int size, bool useVector = false);

    // Push method
    void push(int value);

    // Pop method
    int pop();

    // Peek method
    int peek();

    // Check if stack is empty
    bool isEmpty();

    // Display all elements in the stack
    void display();
};

#endif // STACK_H
