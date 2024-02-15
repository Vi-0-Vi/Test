#ifndef TESTCLASS_H
#define TESTCLASS_H


class TestClass
{
    public:
        TestClass(int);
        virtual ~TestClass();

        int *getPtrArr();

    protected:

    private:
        int *ptr_arr;
};

#endif // TESTCLASS_H
