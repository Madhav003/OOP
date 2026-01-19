//Implement the concept of virtual base classes.
#include <iostream>
using namespace std;
class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }
    void show() {
        cout << "Base class show function called." << endl;
    }
};
class Derived : virtual public Base {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }
};
class AnotherDerived : virtual public Derived {
public:
    AnotherDerived() {
        cout << "AnotherDerived class constructor called." << endl;
    }
};
int main() {
    Derived d;
    AnotherDerived ad;
    d.show();
    ad.show();
    return 0;
}