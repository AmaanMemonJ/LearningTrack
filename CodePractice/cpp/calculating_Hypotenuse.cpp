#include <iostream>
#include <cmath>

int main(){

    /*Calculating the hypotenuse of a right angled triangle
    using Pythagorean theorem: a^2 + b^2 = c^2
    where a and b are the lengths of the two legs
    and c is the length of the hypotenuse
    */

    double a; 
    double b; 

    std::cout << "Enter length of side a: ";
    std::cin >> a;
    std::cout << "Enter length of side b: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of the hypotenuse is: " << c << '\n';

}