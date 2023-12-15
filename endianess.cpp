#include <iostream>
using namespace std;

// print 1 if your device is little endian
// 0 otherwise

int main()
{
    int a = 1; // can we use uint8_t a = 1;
    cout << (int)(*(uint8_t*)(&a)) << endl;
    return 0;
}