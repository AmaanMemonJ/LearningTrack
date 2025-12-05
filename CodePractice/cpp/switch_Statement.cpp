#include <iostream>

int main(){

    /* switch statement = allows a variable to be tested for equality against a list of values
    each value is called a case
    switch (expression) {
        case constant1:
            // code to be executed if expression == constant1
            break;
        case constant2:
            // code to be executed if expression == constant2
            break;
        ...
        default:
            // code to be executed if expression doesn't match any case
    }
    */

    int month; 
    std::cout << "Enter a month number (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "January" << std::endl;
            break;
        case 2:
            std::cout << "February" << std::endl;
            break;
        case 3:
            std::cout << "March" << std::endl;
            break;
        case 4:
            std::cout << "April" << std::endl;
            break;
        case 5:
            std::cout << "May" << std::endl;
            break;
        case 6:
            std::cout << "June" << std::endl;
            break;
        case 7:
            std::cout << "July" << std::endl;
            break;
        case 8:
            std::cout << "August" << std::endl;
            break;
        case 9:
            std::cout << "September" << std::endl;
            break;
        case 10:
            std::cout << "October" << std::endl;
            break;
        case 11:
            std::cout << "November" << std::endl;
            break;
        case 12:
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Invalid month number!" << std::endl;

    }
}