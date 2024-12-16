// LinkedList.cpp
#include <iostream>
#include "../include/LinkedList.h"

using namespace std;

// Node constructor


// Function to insert a node at the beginning of the list
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to traverse and print the linked list
void traverseList(Node* head) {
    Node* current = head;
    if (current == nullptr) {
        cout << "NULL" << endl;
    }

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to insert a node at a specific position
void insertAtPosition(Node*& head, int data, int position) {
    Node* newNode = new Node(data);

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    int currentPos = 1;

    while (current != nullptr && currentPos < position - 1) {
        current = current->next;
        currentPos++;
    }

    if (current == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete newNode;
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// Function to delete the entire linked list
void deleteList(Node*& head) {
    Node* current = head;
    Node* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    head = nullptr;
}
/**************Deletion logic********************/
// Function to delete a node at the end of a linked list
void deleteAtEnd(Node*& head) {
    // Step 1: Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: Check if the list has only one node
    if (head->next == nullptr) {
        cout <<"The deleted value is " << head->data << endl;
        delete head;    // Delete the single node
        head = nullptr; // Update head to nullptr
        return;
    }

    // Step 3: Traverse to the second last node
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    // Step 4: Delete the last node
    Node* lastNode = temp->next; // Save the last node
    temp->next = nullptr;        // Update the second last node's next to nullptr
    cout <<"The deleted value is " <<lastNode->data << endl;
    delete lastNode;             // Delete the last node
}

void deleteAtBeginning(Node*& head) {
    // Step 1: Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: Save the current head
    Node* temp = head;

    // Step 3: Update the head pointer
    head = head->next;

    // Step 4: Delete the old head node
    cout <<"Deleting the value at" << temp->data << endl;
    delete temp;
}

// Function to delete a node at any specific position in a linked list
void deleteAtPosition(Node*& head, int position) {
    // Step 1: Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    // Step 2: Handle deletion at the beginning
    if (position == 1) {
        Node* temp = head;   // Save the current head
        head = head->next;   // Move head to the next node
        delete temp;         // Delete the old head
        return;
    }

    // Step 3: Traverse to the node before the desired position
    Node* prev = head;
    int currentPos = 1;
    while (prev != nullptr && currentPos < position - 1) {
        prev = prev->next;
        currentPos++;
    }

    // Step 4: Check if the position is out of bounds
    if (prev == nullptr || prev->next == nullptr) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    // Step 5: Delete the node at the position
    Node* temp = prev->next;        // Save the node to be deleted
    prev->next = temp->next;        // Update the previous node's next pointer
    delete temp;                    // Delete the node
}

