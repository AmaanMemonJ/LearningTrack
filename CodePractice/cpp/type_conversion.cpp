#include <iostream>

int main(){

    /* type conversion = changing an entity of one data type into another  
    two types:
    1. implicit (automatic) type conversion by the compiler
    2. explicit (manual) type conversion by the programmer
    */

    // char x = 100; 

    // std::cout << "char x: " << x << '\n';
// the above is implicit

    // std::cout << (char)100 << '\n'; // explicit

    int correct = 8; 

    int questions = 10;

    double score = correct / (double)questions *100;

    std::cout << "your score is: " << score << "%\n";
    return 0;
}