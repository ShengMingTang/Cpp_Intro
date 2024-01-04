#include <iostream>
using namespace std;

// print 1 if your device is little endian
// 0 otherwise
// uint16_t b = 0x0001;
// b[0] = 0x01;
// b[1] = 0x00;
int main()
{
    int a = 1; // can we use uint8_t a = 1;
    cout << (int)(*(uint8_t*)(&a)) << endl;
    return 0;
}