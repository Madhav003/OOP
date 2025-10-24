//b)	 Write a simple program with two base classes 'Person' and 'Marks', and a derived class 'Result' using multiple inheritance.
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

class Marks {
    float subject1, subject2, subject3;
public:
    Marks(float s1, float s2, float s3) : subject1(s1), subject2(s2), subject3(s3) {}
    void displayMarks() {
        cout << "Marks: " << subject1 << ", " << subject2 << ", " << subject3 << endl;
    }
};

class Result : public Person, public Marks {
    float total;
public:
    Result(string n, int a, float s1, float s2, float s3) : Person(n, a), Marks(s1, s2, s3) {
        total = s1 + s2 + s3;
    }
    void displayResult() {
        Person::displayInfo();
        Marks::displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result result("John Doe", 20, 85.5, 90.0, 78.5);
    result.displayResult();
    return 0;
}