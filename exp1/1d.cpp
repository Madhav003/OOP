//d)	Create a program to swap two variables using a third variable and display results before and after swapping.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    cout << "Sum: " << a + b << endl;

    return 0;
}