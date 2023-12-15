#include <iostream>
using namespace std;

void main_f()
{
    static int a;
    // access inside function only
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
    Base::f();
    cout << Base::base_var << endl;
    return 0;
}