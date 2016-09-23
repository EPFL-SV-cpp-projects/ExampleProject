#include "classA.h"
#include <iostream>

int main( int argc, char **argv ) {
    A a(2);
    std::cout << a.value() << std::endl;
    return 0;
}

