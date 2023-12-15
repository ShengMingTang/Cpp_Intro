#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int *pa = &a;

    int * & rpa = pa;

    int &ra = a;

    int & * pra = ra;
    return 0;
}