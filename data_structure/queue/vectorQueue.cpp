#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> arr;  // Vector to store queue elements

public:
    // Function to check if the queue is empty
    bool isEmpty() {
        return arr.empty();
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        arr.push_back(value);
        cout << value << " enqueued to queue" << endl;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int dequeuedValue = arr.front();  // Get the front element
        arr.erase(arr.begin());  // Remove the front element
        return dequeuedValue;
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr.front();  // Return the front element
    }

    // Function to display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q; // Create a queue using vector

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
