#include <iostream>
using namespace std;

int f(int a)
{
    cout << "int" << endl;
    return a + 1;
}

int f(int a, int b)
{
    return a + b;
}

int64_t f(int a, int b)
{
    return a + b;
}

int f(int *a)
{
    cout << "pointer" << endl;
    if(a == nullptr) {
        return 0;
    }
    return *a;
}

// if it has default arg(s), it(they) must be arranged to the last parts of arg list
int f_d(int a, int b = 0)
{
    return a + b;
}

int f_dd(int a, int b, int c = 0);
/*
 in other file, we define f_dd without specifying default values

 int f_dd(int a, int b, int c)
 {
    ...
 }
*/

int main()
{
    f(1);
    // Q2
    // f(NULL);
    // f(nullptr);
    return 0;
}

// a function is uniquely identified by
// its name and arg list, but not return type