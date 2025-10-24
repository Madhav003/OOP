// a)	Create a class 'Employee' and use a pointer to object to access and display its data members.
#include <iostream>
using namespace std;
class Employee {
    string name;
    int id;
    float salary;
public:
    Employee(string n, int i, float s) : name(n), id(i), salary(s) {}
    void displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee* emp = new Employee("John Doe", 12345, 50000);
    emp->displayInfo();
    delete emp;
    return 0;
}