// main.cpp
#include <iostream>
#include "../include/LinkedList.h"

using namespace std;

int main() {
    Node* head = nullptr;

    // Insert nodes at the beginning and end, and at specific positions
    insertAtBeginning(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    
    cout << "Linked List: ";
    traverseList(head);  // Output: 10 20 30

    insertAtBeginning(head, 40);
    cout << "After Insertion at Beginning: ";
    traverseList(head);  // Output: 40 10 20 30

    insertAtEnd(head, 50);
    cout << "After Insertion at End: ";
    traverseList(head);  // Output: 40 10 20 30 50

    insertAtPosition(head, 330, 2);
    cout << "After Insertion at Position 2: ";
    traverseList(head);  // Output: 40 330 10 20 30 50

    deleteList(head);
    cout << "After Deletion: ";
    traverseList(head);  // Output: NULL

    return 0;
}
