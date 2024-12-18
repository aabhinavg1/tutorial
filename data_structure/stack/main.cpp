#include "Stack.h"
#include <iostream>

void displayMenu() {
    std::cout << "\nMenu:\n";
    std::cout << "1. Use Array-based Stack\n";
    std::cout << "2. Use Vector-based Stack\n";
    std::cout << "3. Push element\n";
    std::cout << "4. Pop element\n";
    std::cout << "5. Display Stack elements\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    int choice, stackType, value;
    Stack* currentStack = nullptr;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter size for Array-based Stack: ";
                std::cin >> value;
                currentStack = new Stack(value, false); // false for array-based stack
                std::cout << "Array-based stack created with size " << value << ".\n";
                break;

            case 2:
                std::cout << "Enter size for Vector-based Stack: ";
                std::cin >> value;
                currentStack = new Stack(value, true); // true for vector-based stack
                std::cout << "Vector-based stack created with size " << value << ".\n";
                break;

            case 3: // Push element
                if (currentStack == nullptr) {
                    std::cout << "Please create a stack first.\n";
                    break;
                }
                std::cout << "Enter a value to push: ";
                std::cin >> value;
                try {
                    currentStack->push(value);
                } catch (const std::overflow_error& e) {
                    std::cout << e.what() << "\n";
                }
                break;

            case 4: // Pop element
                if (currentStack == nullptr) {
                    std::cout << "Please create a stack first.\n";
                    break;
                }
                try {
                    value = currentStack->pop();
                    std::cout << "Popped value: " << value << "\n";
                } catch (const std::underflow_error& e) {
                    std::cout << e.what() << "\n";
                }
                break;

            case 5: // Display Stack elements
                if (currentStack == nullptr) {
                    std::cout << "Please create a stack first.\n";
                    break;
                }
                currentStack->display();
                break;

            case 6: // Exit
                std::cout << "Exiting the program.\n";
                delete currentStack; // Free memory
                break;

            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
