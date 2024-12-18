
#include <iostream>
#include "Stack.h"

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Push element\n";
    cout << "2. Pop element\n";
    cout << "3. Peek top element\n";
    cout << "4. Check if stack is empty\n";
    cout << "5. Display stack elements\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    Stack stack;  // Create an instance of the Stack
    int choice, value;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Push element
                cout << "Enter a value to push: ";
                cin >> value;
                stack.push(value);
                break;

            case 2: // Pop element
                try {
                    value = stack.pop();
                    cout << "Popped value: " << value << endl;
                } catch (const underflow_error& e) {
                    cout << e.what() << endl;
                }
                break;

            case 3: // Peek top element
                try {
                    value = stack.peek();
                    cout << "Top element: " << value << endl;
                } catch (const underflow_error& e) {
                    cout << e.what() << endl;
                }
                break;

            case 4: // Check if stack is empty
                if (stack.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                break;

            case 5: // Display stack elements
                stack.display();
                break;

            case 6: // Exit
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
