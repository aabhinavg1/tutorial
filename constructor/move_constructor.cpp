#include <iostream>
using namespace std;

class MyClass {
public:
    int* value;
    
    MyClass(int val) { // Parameterized Constructor
        value = new int(val);
        cout << "Parameterized Constructor Called, Value: " << *value << endl;
    }
    
    // Move Constructor
    MyClass(MyClass&&  l) noexcept {
        value = obj.value;
        obj.value = nullptr; // Nullify the original object's pointer
        cout << "Move Constructor Called" << endl;
    }
    
    ~MyClass() {
        if (value) {
            delete value;
            cout << "Destructor Called" << endl;
        }
    }
};

int main() {
    MyClass obj1(10); // Calls parameterized constructor
    MyClass obj2 = std::move(obj1); // Calls move constructor
    return 0;
}

