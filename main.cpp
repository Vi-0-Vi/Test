#include <iostream>
#include "TestClass.h"

int main()
{
    int count_elements = 10;
    TestClass *test = new TestClass(count_elements);

    int *ptr;
    ptr = test->getPtrArr();
    for (int i = 0; i < count_elements; i++)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
