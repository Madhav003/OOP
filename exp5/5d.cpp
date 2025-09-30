#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:

    string Name;
    int accountNumber;
    double balance;
    
    void init(string name, int accNo, double initDeposit) {
        Name = name;
        accountNumber = accNo;
        balance = 0; 
        deposit(initDeposit);
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            cout << "Withdrawal amount must be positive.\n";
        }
    }

    void display() {
        cout << string(20, '-') << endl;
        cout << "Account Holder: " << Name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << string(20, '-') << endl;
    }
};

int main() {
    const int n = 5;
    BankAccount accounts[n];  
    int accountCount = 0;

    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Create account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                if (accountCount >= n) {
                    cout << "Maximum number of accounts reached.\n";
                    break;
                }
                cin.ignore(10000, '\n'); 
                string name;
                int accNo;
                double init;
                cout << "Enter Account Holder Name: ";
                getline(cin, name);
                cout << "Enter Account Number: ";
                cin >> accNo;
                cout << "Enter initial deposit (0 for none): ";
                cin >> init;

                accounts[accountCount].init(name, accNo, init);
                accountCount++;
                break;
            }
            case 2: {
                int accNo;
                cout << "Enter account number: ";
                cin >> accNo;
                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i].accountNumber == accNo) {
                        double amount;
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        accounts[i].deposit(amount);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found.\n";
                break;
            }
            case 3: {
                int accNo;
                cout << "Enter account number: ";
                cin >> accNo;
                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i].accountNumber == accNo) {
                        double amount;
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        accounts[i].withdraw(amount);
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found.\n";
                break;
            }
            case 4: {
                int accNo;
                cout << "Enter account number: ";
                cin >> accNo;
                bool found = false;
                for (int i = 0; i < accountCount; i++) {
                    if (accounts[i].accountNumber == accNo) {
                        accounts[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Account not found.\n";
                break;
            }
            case 5:
                cout << "Exiting.\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
