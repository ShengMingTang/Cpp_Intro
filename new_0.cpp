#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int *a = new int[20];
    for(int i = 0; i < n; i++) {a[i] = i;}
    delete a;
}