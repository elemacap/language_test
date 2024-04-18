#include "Test.h"
#include <iostream>

void Test::Run()
{
    int a = 1;
    int b = 2;
    int c = a + b;
    std::cout << "call run" << std::endl;
    std::cout << c << std::endl;
}