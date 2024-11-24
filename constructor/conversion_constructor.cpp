#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Conversion Constructor (from int to MyClass)
    MyClass(int val) {
        value = val;
        cout << "Conversion Constructor Called, Value: " << value << endl;
    }
};

int main() {
    MyClass obj = 10; // Implicit conversion from int to MyClass
    return 0;
}
