#include "TestClass.h"
#include <iostream>
#include <time.h>

TestClass::TestClass()
{
    srand(time(NULL));
    random_num = 1 + rand() % 100;
    //ctor
}

TestClass::~TestClass()
{
    //dtor
}

int TestClass::getRandomNum()
{
    return random_num;
}
