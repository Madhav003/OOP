//a) Create a base class 'Person' and a derived class 'Student' to demonstrate single inheritance.
#include <iostream>
using namespace std;
class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
    string major;
public:
    Student(string n, int a, string m) : Person(n, a), major(m) {}
    void displayInfo() {
        Person::displayInfo();
        cout << "Major: " << major << endl;
    }
};
int main() {
    Student student("Madhav", 18, "Computer Science");
    student.displayInfo();
    return 0;
}