#include <iostream>
#include <string>
using namespace std;

// what the result of this?
// step by step questions

int main()
{
    int a = 1;
    
    int &b = 2;

    int &bb;
    
    int &c = a;
    c = 3;
    cout << a << endl;

    int &const d = a;

    const int &e = a;
    e = 3;
    cout << a << endl;

    int &f = e;
}

// can we rewrite pp.cpp into reference to pointer form without if-else conditionals?