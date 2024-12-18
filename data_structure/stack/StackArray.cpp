#include "Stack.h"

// Constructor for array-based stack
Stack::Stack(int size, bool useVector) : capacity(size), top(-1) {
    if (!useVector) {
        arr = new int[capacity];  // Initialize array for stack
    }
}

// Push method for array-based stack
void Stack::push(int value) {
    if (top >= capacity - 1) {
        throw std::overflow_error("Stack overflow: Cannot push, Stack is full.");
    }
    arr[++top] = value;
    std::cout << "Pushed " << value << " to the array stack.\n";
}

// Pop method for array-based stack
int Stack::pop() {
    if (top == -1) {
        throw std::underflow_error("Stack underflow: Cannot pop, Stack is empty.");
    }
    return arr[top--];
}

// Peek method for array-based stack
int Stack::peek() {
    if (top == -1) {
        throw std::underflow_error("Stack is empty, no top element.");
    }
    return arr[top];
}

// Check if the array-based stack is empty
bool Stack::isEmpty() {
    return top == -1;
}

// Display elements of the array-based stack
void Stack::display() {
    if (top == -1) {
        std::cout << "Array stack is empty.\n";
        return;
    }
    std::cout << "Array Stack elements: ";
    for (int i = 0; i <= top; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
