#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Constructor with a parameter
    MyClass(int val) {
        value = val;
        cout << "Constructor with Parameter Called, Value: " << value << endl;
    }
    
    // Delegating Constructor
    MyClass() : MyClass(5) { // Delegates to MyClass(int val) constructor
        cout << "Delegating Constructor Called" << endl;
    }
};

int main() {
            cout << "inside the main  Called" << endl;

    MyClass obj; // Calls the delegating constructor which calls the parameterized constructor
    return 0;
}
