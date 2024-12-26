#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor to initialize the queue
    Queue() {
        front = rear = nullptr;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == nullptr);
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            // If queue is empty, both front and rear point to the new node
            front = rear = newNode;
            cout << value << " enqueued to queue" << endl;
            return;
        }
        // Add new node at the end and move rear
        rear->next = newNode;
        rear = newNode;
        cout << value << " enqueued to queue" << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int dequeuedValue = front->data;
        Node* temp = front;
        front = front->next; // Move front to the next node
        delete temp; // Free the old front node
        if (front == nullptr) {
            rear = nullptr; // If queue becomes empty, set rear to nullptr
        }
        return dequeuedValue;
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }

    // Function to display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q; // Create a queue using linked list

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display(); // Display the queue

    cout << "Dequeued: " << q.dequeue() << endl; // Remove an element from the queue
    q.display();

    cout << "Peek: " << q.peek() << endl; // Get the front element of the queue

    return 0;
}
