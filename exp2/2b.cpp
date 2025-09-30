#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter an integer: ";
    cin >> m;
    
    switch (m % 2) {
        case 0:
            cout << "The number is even." << endl;
            break;
        case 1:
        case -1:
            cout << "The number is odd." << endl;
            break;
    }
    
    return 0;
}