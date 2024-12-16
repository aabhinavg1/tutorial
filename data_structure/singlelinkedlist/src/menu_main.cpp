#include <iostream>
#include "../include/LinkedList.h"
#include <limits> // For numeric_limits



int main() {
   Node* head = nullptr;
   int choice = 0, value, position;

    do {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Display Linked List\n";
        cout << "5. Delete Linked List\n";
        cout <<"6. Delete the Linked List from beginning\n";
        cout <<"7. Delete the Linked List from end\n";
        cout <<"8. Delete the Linked List from Position\n";

        cout << "9. Exit\n";

        // Input validation loop for choice
        cout << "Enter your choice: ";
        while (!(cin >> choice)) {
            // Clear the error state of cin
            cin.clear();
            // Ignore the incorrect input until the next newline character
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // Ask the user for input again
            cout << "Invalid input! Please enter an integer: ";
        }

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                insertAtBeginning(head, value);
                cout << "Node inserted at the beginning.\n";
                break;

            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd(head, value);
                cout << "Node inserted at the end.\n";
                break;

            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at: ";
                cin >> position;
                insertAtPosition(head, value, position);
                cout << "Node inserted at position " << position << ".\n";
                break;

            case 4:
                cout << "Linked List: ";
                traverseList(head);
                break;

            case 5:
                deleteList(head);
                cout << "Linked List deleted.\n";
                break;
            case 6:
                cout <<"Deleting from the beggining\n";
                deleteAtBeginning(head);

                break;
            case 7:
                cout <<"Deleting from the end\n";
                deleteAtEnd(head);
                break;
            case 8:
                cout << "Enter position to delete at: ";
                cin >> position;
                deleteAtPosition(head,position);
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}
