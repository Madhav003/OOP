#include <iostream>
#include <cmath>
using namespace std;

inline int cube(int a) {
    return a * a * a;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int result = cube(a);
    cout << "Cube of " << a << " is " << result << endl;

    return 0;    
}