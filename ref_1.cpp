#include <iostream>
#include <string>
using namespace std;

string& f() {
    string s = "123";
    return s;
}

// what the result of this?

int main()
{
    string s = f();
    s.push_back('4');
    return 0;
}
