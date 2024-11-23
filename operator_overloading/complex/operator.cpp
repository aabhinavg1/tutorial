
#include"operator.h"
    int main() {
    Complex c1, c2, c3;

    // Manually setting values for real and imag after object creation
    c1.real = 1;
    c1.imag = 2;

    c2.real = 3;
    c2.imag = 4;

    c3 = c1 + c2;  // Calls overloaded operator+ (addition of complex numbers)

    std::cout << "Sum: " << c3.real << " + " << c3.imag << "i" << std::endl;

    return 0;
}

