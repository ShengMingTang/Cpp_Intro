#include <iostream>
using namespace std;

class Base
{
public:
    Base() {cout << "constr_base" << endl;}
    void pub_f() {cout << "pub_base" << endl;}
    void f() {cout << "base-f" << endl;}
protected:
    void ptc_f() {cout << "ptc_base" << endl;}
private:
    void prt_f() {cout << "prt_base" << endl;}
};

class Derived: public Base // protected Base
{
public:
    Derived(): Base() {cout << "constr_derived" << endl;}
    void dummy() {
        pub_f();
        ptc_f();
        prt_f();
    }
    void f()
    {
        cout << "derived-f" << endl;
    }
};

/*
1. can the derived be compiled?
2. construct the class
3. run the f calls (is that as expected, 2 steps)
4. virtual override pair (observe c.f and pb_d.f)
5. what override guarantees
6. access base class methods (decorate)
*/
int main()
{
    Base b;
    Derived d;
    b.f();
    d.f();
    Base c = Derived();
    cout << "===================" << endl;
    c.f();
    cout << "===================" << endl;
    Base *pb = &b;
    pb->f();
    Derived *pd = &d;
    pd->f();

    Base *pb_d = &d;
    pb_d->f();
    return 0;
}