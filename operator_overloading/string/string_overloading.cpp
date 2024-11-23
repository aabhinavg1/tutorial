#include "string_overloading.h"
int main() {
    MyString s1, s2;
    s1.setString("Hello ");  // Set string for s1
    s2.setString("World!");  // Set string for s2

    MyString s3 = s1 + s2;  // Using overloaded + operator to concatenate
    s3.display();  // Output: Hello World!

    return 0;
}