#include <iostream>
#include "../include/Linked_List_Template.h" // Include the header file for templates

using namespace std;

void menu() {
    cout << "Menu:" << endl;
    cout << "1. Insert at Beginning" << endl;
    cout << "2. Insert at End" << endl;
    cout << "3. Insert at Position" << endl;
    cout << "4. Traverse List" << endl;
    cout << "5. Delete List" << endl;
    cout << "6. Exit" << endl;
}

int main() {
    int choice, position;
    int intValue;
    float floatValue;
    char charValue;
    Node<int>* intList = nullptr;
    Node<float>* floatList = nullptr;
    Node<char>* charList = nullptr;

    while (true) {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Insert at Beginning
                cout << "Enter data to insert at the beginning: ";
                cout << "1. Integer, 2. Float, 3. Char: ";
                int typeChoice;
                cin >> typeChoice;

                if (typeChoice == 1) {
                    cout << "Enter integer value: ";
                    cin >> intValue;
                    insertAtBeginning(intList, intValue);
                } else if (typeChoice == 2) {
                    cout << "Enter float value: ";
                    cin >> floatValue;
                    insertAtBeginning(floatList, floatValue);
                } else if (typeChoice == 3) {
                    cout << "Enter char value: ";
                    cin >> charValue;
                    insertAtBeginning(charList, charValue);
                }
                break;
            case 2: // Insert at End
                cout << "Enter data to insert at the end: ";
                cout << "1. Integer, 2. Float, 3. Char: ";
                cin >> typeChoice;

                if (typeChoice == 1) {
                    cout << "Enter integer value: ";
                    cin >> intValue;
                    insertAtEnd(intList, intValue);
                } else if (typeChoice == 2) {
                    cout << "Enter float value: ";
                    cin >> floatValue;
                    insertAtEnd(floatList, floatValue);
                } else if (typeChoice == 3) {
                    cout << "Enter char value: ";
                    cin >> charValue;
                    insertAtEnd(charList, charValue);
                }
                break;
            case 3: // Insert at Position
                cout << "Enter data to insert at a specific position: ";
                cout << "1. Integer, 2. Float, 3. Char: ";
                cin >> typeChoice;
                cout << "Enter position: ";
                cin >> position;

                if (typeChoice == 1) {
                    cout << "Enter integer value: ";
                    cin >> intValue;
                    insertAtPosition(intList, intValue, position);
                } else if (typeChoice == 2) {
                    cout << "Enter float value: ";
                    cin >> floatValue;
                    insertAtPosition(floatList, floatValue, position);
                } else if (typeChoice == 3) {
                    cout << "Enter char value: ";
                    cin >> charValue;
                    insertAtPosition(charList, charValue, position);
                }
                break;
            case 4: // Traverse List
                cout << "1. Integer List, 2. Float List, 3. Char List: ";
                cin >> typeChoice;

                if (typeChoice == 1) {
                    cout << "Integer List: ";
                    traverseList(intList);
                } else if (typeChoice == 2) {
                    cout << "Float List: ";
                    traverseList(floatList);
                } else if (typeChoice == 3) {
                    cout << "Char List: ";
                    traverseList(charList);
                }
                break;
            case 5: // Delete List
                cout << "1. Integer List, 2. Float List, 3. Char List: ";
                cin >> typeChoice;

                if (typeChoice == 1) {
                    deleteList(intList);
                } else if (typeChoice == 2) {
                    deleteList(floatList);
                } else if (typeChoice == 3) {
                    deleteList(charList);
                }
                break;
            case 6: // Exit
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
