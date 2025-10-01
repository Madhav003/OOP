//make  a bank class with name balance and acc no. 
//make default constructor to initialize aoj with name new and 0 0 for the other two. 
//make a parameterized constructor to initialize all the three data members. 
//make a function to display the details of the account. 
//make a function to deposit an amount and another function to withdraw an amount. 
//make a function to display balance. make a counter. there should be three objects and 1 extra object made with copy constructor
#include <iostream>
#include <string>
using namespace std;

class Bank {
    string name;
    int accNo;
    double balance;
    static int counter;
public:
    Bank() {
        name = "new";
        accNo = 0;
        balance = 0;
        counter++;
    }
    Bank(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
        counter++;

    }
    Bank(const Bank &obj) {
        name = obj.name;
        accNo = obj.accNo;
        balance = obj.balance;
        counter++;
    }
    void display() {
        cout << "Name: " << name << ", AccNo: " << accNo << ", Balance: " << balance << endl;
    }
    static void showCounter() {
        cout << "Objects created: " << counter << endl;
    }
    ~Bank() {
        cout << "Destructor called" << endl;
        counter--;
    }
};

int Bank::counter = 0;

int main() {
    Bank b1;
    Bank b2("Madhav", 101, 5000);
    Bank b3("Raza", 102, 3000);
    Bank b4 = b2;

    b1.display();
    b2.display();
    b3.display();
    b4.display();

    {
        Bank b5("Temp", 103, 1000);
        b5.display();
    }

    Bank::showCounter();
    return 0;
}