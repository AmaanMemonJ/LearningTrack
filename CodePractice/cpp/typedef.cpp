#include <iostream> 

#include <vector> 

// typedef std::vector<std::pair<std::string, int>> pairlist;

// typedef std::string text;
// typedef int number_t;

using text = std::string;
using number_t = int;
int main() {

    /*
    typedef = keyword used to create an alias
    for another data type
    can make code more readable
    especially when dealing with complex data types

    nowadays people using 'using' keyword instead of typedef
    */

    // pairlist_t pairlist;

    text firstname = "Amaan";

    number_t age = 20 << '\n';


    std::cout << firstname << '\n';


    return 0;
}