#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Explicit Constructor
    exp MyClass(int val) {
        value = val;
        cout << "Explicit Constructor Called, Value: " << value << endl;
    }
};

int main() {
    MyClass obj1(10); // Explicit constructor called
   MyClass obj2 = 20; // Error: implicit conversion is not allowed due to explicit
    return 0;
}
