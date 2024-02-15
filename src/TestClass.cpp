#include "TestClass.h"
#include <iostream>
#include <time.h>

TestClass::TestClass(int count_elements)
{
    srand(time(NULL));

    ptr_arr = new int [count_elements];
    for (int i = 0; i < count_elements; i++)
    {
        ptr_arr[i] = 1 + rand() % 100;
    }
    //ctor
}

TestClass::~TestClass()
{
    delete [] ptr_arr;
    //dtor
}

int *TestClass::getPtrArr()
{
    return ptr_arr;
}
