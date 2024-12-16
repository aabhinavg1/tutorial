// LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
using namespace std;
// Define the Node class
class Node {
public:
    int data;      // The value stored in the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize the node with data
    Node(int value){
    data = value;
    next = nullptr;  // Initially, the next pointer is set to nullptr
}
};

// Function declarations
void insertAtBeginning(Node*& head, int value);
void insertAtEnd(Node*& head, int value);
void traverseList(Node* head);
void insertAtPosition(Node*& head, int data, int position);
void deleteList(Node*& head);
void deleteAtEnd(Node* &head);
void deleteAtBeginning(Node* &head);
void deleteAtPosition(Node* &head, int position);


#endif // LINKEDLIST_H
