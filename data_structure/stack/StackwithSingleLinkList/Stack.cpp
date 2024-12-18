#include "Stack.h"

using namespace std;

// Constructor to initialize the top pointer
Stack::Stack() : top(nullptr) {}

// Destructor to clean up memory by deleting all nodes
Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

// Push method to add an element to the stack
void Stack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
    cout << "Pushed " << value << " to the Stack." << endl;
}

// Pop method to remove and return the top element of the stack
int Stack::pop() {
    if (isEmpty()) {
        throw underflow_error("Stack underflow: Cannot pop, Stack is empty.");
    }
    Node* temp = top;
    int value = top->data;
    top = top->next;
    delete temp;
    return value;
}

// Peek method to view the top element without removing it
int Stack::peek() {
    if (isEmpty()) {
        throw underflow_error("Stack is empty, no top element.");
    }
    return top->data;
}

// Check if the stack is empty
bool Stack::isEmpty() {
    return top == nullptr;
}

// Display all elements in the stack
void Stack::display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    Node* current = top;
    cout << "Stack elements: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
