#include <iostream>
#include <string>
using namespace std;

int& min_ref(int &a, int &b)
{
    return a < b ? a : b;
}

// int& min(int a, int b)
// {
//     return a < b ? a : b;
// }

// what the result of this?

int main()
{
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    min_ref(a, b) = 3;
    cout << a << " " << b << endl;
    // min(a, b) = 4;
    // cout << a << " " << b << endl;
}
