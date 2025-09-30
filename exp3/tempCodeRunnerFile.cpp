#include <iostream>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double sum(double a, double b, double c) {
    return a + b + c;
}

int main() {
    double num1, num2, num3;
    
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of two numbers: " << sum(num1, num2) << endl;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three numbers: " << sum(num1, num2, num3) << endl;
    
    return 0;
}