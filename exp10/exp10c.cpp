//Create a base class with a virtual function and derive class to override it, demonstrating runtime polymorphism.
#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}