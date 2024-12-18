#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept> // For underflow_error

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;  // Pointer to the top element of the stack

public:
    // Constructor
    Stack();
    
    // Destructor to free memory
    ~Stack();

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
