#include <iostream>

using namespace std;

class A{
public:
    A() {
        cout << "In A constructor" << endl;
    };
    ~A() {
        cout << "In A deconstructor" << endl;
    };
};

class B : public A {
public:
    B() {
        cout << "In B constructor" << endl;
    };
    ~B() {
        cout << "In B deconstructor" << endl;
    };
};

class C : public B {
public:
    C() {
        cout << "In C constructor" << endl;
    };
    ~C() {
        cout << "In C deconstructor" << endl;
    };
};

int main()
{
    C c;
    return 0;
}
