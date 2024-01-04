#include <iostream>
using namespace std;

class Base
{
public:
    Base() {}
    virtual void f() = 0;
};

class Derived: public Base
{
public:
    Derived(): Base() {}
    void f() override
    {
        cout << "derived-f" << endl;
    }
};

void func(Base *b)
{
    b->f();
}

/*
1. Can the code be compiled ?
2. uncomment Dervied
3. uncomment func
*/

int main()
{
    // Base a;
    Derived d;
    Base *pd = &d;
    pd->f();
    func(pd);
    return 0;
}