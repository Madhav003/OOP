#include <iostream>
using namespace std;

int main() {
    while (1) {
        int i, j;
        char op;
        cout << "Enter 2 numbers (tap enter): ";
        cin >> i >> j;
        cout << "Choose operator (+, -, *, /): ";
        cin >> op;

        switch (op) {
            case '+':
                cout << i + j;
                break;
            case '-':
                cout << i - j;
                break;
            case '*':
                cout << i * j;
                break;
            case '/':
                if (j != 0)
                    cout << i / j;
                else
                    cout << "Error: Division by zero.";
                break;
            default:
                cout << "Enter a valid operator.";
        }
        cout << endl;
    }
}
