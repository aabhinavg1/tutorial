#ifndef LINKED_LIST_TEMPLATE_H
#define LINKED_LIST_TEMPLATE_H

#include <iostream>
using namespace std;

// Node structure template
template <typename T>
class Node {
private:
    T data;
    Node* next;

public:
    // Constructor
    Node(T val) : data(val), next(nullptr) {}

    // Getter and Setter for data and next
    T getData() const { return data; }
    void setData(T val) { data = val; }

    Node* getNext() const { return next; }
    void setNext(Node* nextNode) { next = nextNode; }
};

// Function prototypes
template <typename T>
void insertAtBeginning(Node<T>*& head, T value);

template <typename T>
void insertAtEnd(Node<T>*& head, T value);

template <typename T>
void traverseList(Node<T>* head);

template <typename T>
void insertAtPosition(Node<T>*& head, T data, int position);

template <typename T>
void deleteList(Node<T>*& head);

// Function definitions
template <typename T>
void insertAtBeginning(Node<T>*& head, T value) {
    Node<T>* newNode = new Node<T>(value);
    newNode->setNext(head);
    head = newNode;
}

template <typename T>
void insertAtEnd(Node<T>*& head, T value) {
    Node<T>* newNode = new Node<T>(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node<T>* temp = head;
    while (temp->getNext() != nullptr) {
        temp = temp->getNext();
    }

    temp->setNext(newNode);
}

template <typename T>
void traverseList(Node<T>* head) {
    Node<T>* current = head;
    if (current == nullptr) {
        cout << "NULL" << endl;
    }
    while (current != nullptr) {
        cout << current->getData() << " ";
        current = current->getNext();
    }
    cout << endl;
}

template <typename T>
void insertAtPosition(Node<T>*& head, T data, int position) {
    Node<T>* newNode = new Node<T>(data);
    if (position == 1) {
        newNode->setNext(head);
        head = newNode;
        return;
    }

    Node<T>* current = head;
    int currentPos = 1;

    while (current != nullptr && currentPos < position - 1) {
        current = current->getNext();
        currentPos++;
    }

    if (current == nullptr) {
        cout << "Position out of bounds!" << endl;
        delete newNode;
        return;
    }

    newNode->setNext(current->getNext());
    current->setNext(newNode);
}

template <typename T>
void deleteList(Node<T>*& head) {
    Node<T>* current = head;
    Node<T>* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->getNext();
        delete current;
        current = nextNode;
    }

    head = nullptr;
}

#endif // LINKED_LIST_TEMPLATE_H
