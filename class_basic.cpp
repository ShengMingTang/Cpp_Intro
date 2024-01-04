#include <iostream>
#include <string>
using namespace std;

class B
{
// default private
 int a;
};

struct C
{
// default public
    int a;
};

// in C++, class and struct have almost the same semantics
// except for default visibility
class Base
{
public: // accessed in any context
    // constructor
    Base(string _a): a(_a) {
        cout << a << "-constructed" << endl;
    }
    Base(const Base& oth) {
        a = oth.a;
        cout << a << "-copy" << endl;
    }
    Base(Base&& oth) {
        a = oth.a;
        cout << a << "-move" << endl;
    }
    ~Base() {
        cout << a << "-destructed "<< endl;
        // delete
    }
    void dummy() const {}
    // these are two different function signatures / definition
    void f() {
        // this is of Base type
        cout << this->a << "-in-f" << endl;
        dummy();
    }
    void f() const { // const function calls const func
        // this is of const Base type
        // the object itself cannot be modified, important in production code
        cout << this->a << "-in-f-const" << endl;
        dummy();
    }
    Base operator+(const Base& oth) const {
        return Base(a + oth.a);
    }
protected: // access in the class itself and derived class, friend class
    string protected_a; 
private: // accessed in the class itself only
    string a;
    friend class B;
};

Base create()
{
    return Base("create");
}
Base create_arg(Base b)
{
    return b;
}

/*
1. can the class be compiled
2. constructor ouputs
3. function call outputs
*/

int main()
{
    Base a("a");
    Base a_cp(a);
    Base a_cp_ass = a;
    const Base b("b");
    // Base c(create()); // c is constructed from Base("create") directly
    Base d(create_arg(Base("arg"))); // try comment out move
    cout << "===================" << endl;
    a.f();
    b.f();
    Base *pa = &a; // address
    pa->f();

    // Base *pcb = &b; // Base * = const Base * (XX)

    const Base *cpb = &b;
    cpb->f();
    const Base *cpa = &a;
    cpa->f();
    return 0;
}