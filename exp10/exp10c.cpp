//Create a base class with a virtual function and derive class to override it, demonstrating runtime polymorphism. dont use pointers, just normal
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};
int main() {
    Animal a;
    Dog d;
    Cat c;

    a.sound();
    d.sound(); 
    c.sound(); 

    return 0;
}