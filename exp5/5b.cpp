// b)	In above program, use member functions to input and display employee details.
#include <iostream>
#include <string>
using namespace std;

class employee{
    public:
    string name;
    int salary;
    
    //------------
    void input(){
        string temp;
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        getline(cin, temp);
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
