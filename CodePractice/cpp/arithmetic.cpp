#include <iostream>

int main() {

    /*
    Arithmetic Operators = used to perform common mathematical operations
    +  Addition
    -  Subtraction
    *  Multiplication
    /  Division
    %  Modulus (Remainder)
    ++ Increment
    -- Decrement
    */


    // parenthesis first
    // multiplication and division second (left to right)
    // addition and subtraction last (left to right)

    // int students = 10;
    // int teachers = 3;

    // students = students + 1; // 11
    // teachers = teachers - 1; // 2
    // students++ ; // 12
    // teachers-- ; // 1
    // students+= 5; // 17
    // teachers-= 1; // 0
    

    int students = 6-(5+4)*3/2;
    std::cout << students << '\n';




    return 0;
}