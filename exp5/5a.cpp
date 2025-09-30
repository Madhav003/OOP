//a)	Create a class ‘Employee’ with its attributes. Develop a program that creates three 'Employee' objects and print their details.

#include <iostream>
#include <string>
using namespace std;

class employee{
    public:
    string name;
    int salary;
    
    //------------
    void input(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void print(){
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
    }

};

int main(){
    employee emps[3];
    for(int i = 0; i < 3; i++){
        cout << "Enter details for emp id: e" << (i+1) << "\n";
        emps[i].input();
    }

    cout << "\nEmployee details:\n";
    for(int i = 0; i < 3; i++){
        cout << "Employee e" << (i+1) << ":\n";
        emps[i].print();
    }

    return 0;
}
