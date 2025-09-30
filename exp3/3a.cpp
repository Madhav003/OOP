#include <iostream>
#include <cmath>
using namespace std;

int area(int a, int b) {
    return a * b;
}

float area(int a, int b, int c) {
    float s = (a+b+c)/2.0;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}

float area(int a) {
    int pi = 3.1416;
    return pi * a * a;
}

int main() {
    char shape;
    cout << "Enter shape (r: rectangle, t: triangle, c: circle): ";
    cin >> shape;

    float ar = 0.0;
    int a, b, c;

    if (shape == 'r') {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        ar = area(a, b);
    }
    else if (shape == 't') {
        cout << "Enter side a: ";
        cin >> a;
        cout << "Enter side b: ";
        cin >> b;
        cout << "Enter side c: ";
        cin >> c;
        ar = area(a, b, c);
    }
    else if (shape == 'c') {
        cout << "Enter a: ";
        cin>>a;
        ar = area(a);
    }
    else {
        cout << "Enter a valid shape." << endl;
        return 1;
    }

    cout << "Area = " << ar << endl;
    return 0;
}
