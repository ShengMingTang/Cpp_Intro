#include <iostream>
using namespace std;

void main_f()
{
    static int a = 0;
    // access inside function only
    a++;
    cout << a << endl;
}

class Base
{
public:
    static void f() {cout << "static-base" << endl;}
    const static int base_var = 2;
};

/*
1. compiled ?
*/
int main()
{
    // f();
    // cout << var << endl;

    main_f();
    main_f();

    Base::f();
    cout << Base::base_var << endl;
    return 0;
}