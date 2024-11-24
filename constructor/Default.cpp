 #include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() { // Default Constructor
        cout << "Default Constructor Called!" << endl;
    }
    ~MyClass() {
        cout <<"Inside the destructor" <<endl;
    }
};

int main() {
            cout <<"Inside the main" <<endl;

    MyClass obj; // Calls the default constructor
      cout <<"after the object creation" <<endl;

    return 0;
}
