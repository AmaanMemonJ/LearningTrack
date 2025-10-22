#include <iostream>

int main() {
    int x; // Declaration of an integer variable 'x'
    x = 5; // Assignment of value 5 to variable 'x'
    int y = 6;

    int sum = x + y; // Declaration and assignment in one line


    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';


    int age = 21; 
    int year = 2023; 
    int days = 7.5; 

    std::cout << days;

    //double pi = 3.14;

    double price = 4.99;
    std::cout << price << '\n';

    //single character
    char grade = 'A';
    std::cout << grade << '\n'; 
    char initial = 'CBA';
    std::cout << initial << '\n';
    //overflow example


    // boolean (true or false)

    bool student = true; 
    bool rain = false;
    std::cout << student << '\n';
    std::cout << rain << '\n';  

    //string (Objects that represent a sequence of characters)
    std::string name = "Amaan";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address =  "123 main st.";
    std::cout << "hello "   << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';
    return 0;
}