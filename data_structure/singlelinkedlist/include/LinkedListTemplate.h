#include <iostream>
using namespace std;

// Node structure
template <typename T>
class Node {
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};
// Function declarations
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
    newNode->next = head;
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
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

template <typename T>
void traverseList(Node<T>* head) {
    Node<T>* current = head;
    if (current == nullptr) {
        cout << "NULL" << endl;
    }
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template <typename T>
void insertAtPosition(Node<T>*& head, T data, int position) {
    Node<T>* newNode = new Node<T>(data);

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node<T>* current = head;
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

template <typename T>
void deleteList(Node<T>*& head) {
    Node<T>* current = head;
    Node<T>* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    head = nullptr;
}
