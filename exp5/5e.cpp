// e)	Create a class 'Student' and input marks in 3 subjects using a function, then calculate total and percentage.
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    int rollNo;
    string Name;
    int marks[3];
    int total;
    float percentage;
    void input(){
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(10000, '\n'); 
        cout << "Enter Name: ";
        getline(cin, Name);
        total = 0;
        for(int i=0; i<3; i++){
            cout << "Enter marks in subject " << i+1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        percentage = total / 3.0;
    }

    void print(){
        cout << "Roll No: " << rollNo << "\n";
        cout << "Name: " << Name << "\n";
        for(int i=0; i<3; i++){
            cout << "Marks in subject " << i+1 << ": " << marks[i] << "\n";
        }
        cout << "Total Marks: " << total << "\n";
        cout << "Percentage: " << percentage << "%\n";
    }

};

int main(){
    Student s1;
    s1.input();
    cout << "\nStudent Details:\n";
    s1.print();
    return 0;
}