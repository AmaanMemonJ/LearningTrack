#include <iostream>

int main() {
    /*
    the const keyword is used to declare variables
    whose value cannot be changed
    tells the compiler to prevent anything from modifying it
    read only variable
    */

    const double pi  = 3.14;
    // pi  = 3.14159; // not allowed
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm" << '\n';

    return 0;
}