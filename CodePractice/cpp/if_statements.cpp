#include <iostream>

int main() { 
    
    /* if statement = performs a block of code if its condition is true
    syntax:
    if (condition) {
        // code to be executed if condition is true
    }
    */

    int age; 
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 18 && age < 100) {
        std::cout << "welcome to the site\n";
    }
    else if(age < 0){
        std::cout << "invalid age\n";
    }
    else if(age >=100){
        std::cout << "wow! you are old\n";
    }
    else{
        std::cout << "sorry, you're not allowed here\n";
    }

    return 0;
}