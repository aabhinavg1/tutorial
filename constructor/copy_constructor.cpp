#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    int value2;
    int value3;
    
    MyClass (int val, int val2, int val3) { // Parameterized Constructor
        value = val;
        value2 = val2;
        value3= val3;
    }
    MyClass(float a){
        std::cout<<"inside the float " <<  std::endl;

    }
    // Copy Constructor
    MyClass(const MyClass &obj) {
        value = obj.value;
        value2 = obj.value2;
        value3 = obj.value3;
        cout << "Copy Constructor Called, Value: " << value << endl;
        cout << "Copy Constructor Called, Value: " << value2 << endl;
                cout << "Copy Constructor Called, Value: " << value3 << endl;


    }
};

int main() {
    MyClass obj1(10,4,3); // Calls parameterized constructor
    MyClass obj3(1.0);
    MyClass obj2 = MyClass(obj1); // Calls copy constructor
    return 0;
}
