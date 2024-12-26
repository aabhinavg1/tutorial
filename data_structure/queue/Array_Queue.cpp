#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int *arr;

public:
    // Constructor to initialize the queue
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    // Destructor to free memory
    ~Queue() {
        delete[] arr;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (rear == -1);
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear == size - 1);
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        arr[++rear] = value;
        cout << value << " enqueued to queue" << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int dequeuedValue = arr[front];
        for (int i = 0; i < rear; i++) {
            arr[i] = arr[i + 1];
        }
        rear--;
        return dequeuedValue;
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Function to display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); // Create a queue of capacity 5

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
