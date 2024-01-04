#include <iostream>
using namespace std;

class Base
{
public:
    Base() {}
    virtual void f() {cout << "base-f" << endl;}
};

class Derived: public Base
{
public:
    Derived(): Base() {}
    void f() {
        // This member function intends to "decorate" the base class
        // do things written in the derived first then the base
        cout << "derived-f" << endl;
        Base::f();
    }
};

/*
1. Predict the outputs
*/
int main()
{
    Base b;
    b.f();
    Derived d;
    d.f();

    // Base *pd = &d;
    // pd->f();
    return 0;
}