#include <iostream>
#include "Test.h"

int main()
{
    std::cout << "hello world!!!" << std::endl;

    Test::Run();    // Test.cpp에 정의된 함수
    return 0;
}