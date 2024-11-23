#include<iostream>
using namespace std;
class MyString {
public:
    char str[100];  // Array to hold the string

    // Method to manually set the string value
    void setString(const char *s) {
        int i = 0;
        while (s[i] != '\0') {
            str[i] = s[i];
            i++;
        }
        str[i] = '\0';  // Null-terminate the string
    }

    // Overload the + operator to concatenate two MyString objects
    MyString operator + (const MyString &other) {
        MyString temp;  // Initialize an empty string for the result
        int i = 0;
        
        // Copy the current string to temp
        while (str[i] != '\0') {
            temp.str[i] = str[i];
            i++;
        }

        // Concatenate the other string to temp
        int j = 0;
        while (other.str[j] != '\0') {
            temp.str[i + j] = other.str[j];
            j++;
        }

        temp.str[i + j] = '\0';  // Null-terminate the concatenated string
        return temp;
    }

    // Method to display the string
    void display() {
        cout << str << endl;
    }
};