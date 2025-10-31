#include<iostream>
using namespace std;

//a)write some simple code.	Create a base class 'Person' and a derived class 'Student' to demonstrate single inheritance.

class person{
    private:
        string name;
        int age;
    public:
    person(int a, string n) : age(a), name(n) {}
    void display(){
        cout << name << age << endl;
    }
};
class child : public person{
    private:
        string school;
    public:
    child(int a, string n, string s) : person(a,n), school(s) {}
    void display(){
        person::display();
        cout << school <<endl;
    }
};
