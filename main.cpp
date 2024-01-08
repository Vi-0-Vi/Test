#include <iostream>
#include "TestClass.h"

int main()
{
    TestClass *test = new TestClass;
    std::cout << test->getRandomNum() << std::endl;

    return 0;
}
