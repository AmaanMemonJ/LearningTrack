#include <iostream>



namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main() {

    /*
    Namespace = provides a solution for preventing name conflicts in large projects
    when your code base includes multiple libraries, 
    it is possible that two different libraries will have functions
    with the same name.

    */
    int x = 0; 
    std::cout << first::x;

    return 0;
}