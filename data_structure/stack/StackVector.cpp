#include "Stack.h"

// Constructor for vector-based stack
Stack::Stack(int size, bool useVector) : capacity(size), top(-1) {
    if (useVector) {
        // No need for explicit initialization as vector grows dynamically
    } else {
        arr = new int[capacity];
    }
}

// Push method for vector-based stack
void Stack::push(int value) {
    if (stack.size() >= capacity) {
        throw std::overflow_error("Stack overflow: Cannot push, Stack is full.");
    }
    stack.push_back(value);
    std::cout << "Pushed " << value << " to the vector stack.\n";
}

// Pop method for vector-based stack
int Stack::pop() {
    if (stack.empty()) {
        throw std::underflow_error("Stack underflow: Cannot pop, Stack is empty.");
    }
    int value = stack.back();
    stack.pop_back();
    return value;
}

// Peek method for vector-based stack
int Stack::peek() {
    if (stack.empty()) {
        throw std::underflow_error("Stack is empty, no top element.");
    }
    return stack.back();
}

// Check if the vector-based stack is empty
bool Stack::isEmpty() {
    return stack.empty();
}

// Display elements of the vector-based stack
void Stack::display() {
    if (stack.empty()) {
        std::cout << "Vector stack is empty.\n";
        return;
    }
    std::cout << "Vector Stack elements: ";
    for (int i = 0; i < stack.size(); i++) {
        std::cout << stack[i] << " ";
    }
    std::cout << "\n";
}
