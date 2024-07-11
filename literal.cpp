#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct A
{
    int a;
    double b;
    string c;
};

A operator""_A(const char *s, size_t sz)
{
    A a;
    stringstream ss(s);
    ss >> a.a >> a.b >> a.c;
    return a;
}

ostream& operator<<(ostream &os, A &a)
{
    os << "a:" << a.a << ", b:" << a.b << ", c:" << a.c << endl;
    return os;
}
int main()
{
    A a = "1 2.1 abcd"_A;
    cout << a;
}