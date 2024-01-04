#include <iostream>
using namespace std;

typedef struct
{
    int data;
    int temp;
} A;

A operator+(const A &a, const A &b)
{
    return {.data = a.data + b.data, .temp = a.temp + b.temp};
}

ostream& operator<<(ostream &os, A &a)
{
    os << a.data << " " << a.temp << endl;
    return os;
}
int main()
{
    A a = {.data = 1, .temp = 2};
    A b = {.data = 3, .temp = 4};
    A c = a + b; // A + A
    ((cout << a) << b) << c << endl;
    return 0;
}