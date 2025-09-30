#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person() = default;

    friend ostream &operator<<(ostream &os, const Person &p) {
        os << "Name: " << p.name << ", Age: " << p.age;
        return os;
    }

    friend istream &operator>>(istream &is, Person &p) {
        cout << "Enter name: ";
        getline(is >> ws, p.name);
        cout << "Enter age: ";
        is >> p.age;
        return is;
    }

private:
    string name;
    int age{};
};

int main() {
    Person p;
    cin >> p;
    cout << p << endl;
    return 0;
}