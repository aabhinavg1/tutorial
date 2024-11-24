#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    int value1;
    
    MyClass(int val, int val2) { // Parameterized Constructor
        value = val;
        value1  = val2;
        int result = value +value1 ;
        cout << "Parameterized Constructor Called, Value: " <<result << endl;
    }
};

int main() {
    MyClass obj(10,2); // Calls the parameterized constructor with 10
    return 0;
}
