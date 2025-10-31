#include <iostream>
using namespace std;
class Complex {
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void print() const {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, -0.5);
    Complex sum = c1 + c2;

    cout << "Sum: ";
    sum.print();
    cout << endl;
    return 0;
}

// Complex operator+ (const Comlpex &other) const {
//  return Complex(real + other.real, imag + other.imag)}