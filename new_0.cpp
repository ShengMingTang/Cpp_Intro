#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int *a = new int[20]; // sizeof(int) * 20, a[0] - a[19]
    // for(int i = 0; i < n; i++) {a[i] = i;}
    delete []a;

    int *b = new int(0);
    delete b;
}