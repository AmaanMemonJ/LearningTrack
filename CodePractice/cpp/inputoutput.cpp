#include <iostream>


int main() {

    /*
    Input/Output Stream = used to perform input and output operations in C++
    cin = standard input stream (keyboard)
    cout = standard output stream (monitor)
    */

    std::string name; 

    int age; 

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    std::cout << "Enter your name: ";
    // std::cin >> name; // if there are spaces we use the following
    std::getline(std::cin >> std::ws, name);

    

    std::cout << "Hello " << name << ", you are " << age << " years old.\n";
    return 0;
}