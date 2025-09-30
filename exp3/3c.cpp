#include <iostream>
#include <string>
using namespace std;

class show {
public:
 int display(int a){
    cout << "Integer: " << a << endl;
    return 1;
  }

  float display(float a) {
    cout << "Float: " << a << endl;
    return 1;
  }
  int display(string a) {
    cout << "String: " << a << endl;
    return 1;
  }

 };

int main() {
    show s;
    int a;
    float b;
    string c;

    cout << "Enter an integer: ";
    cin >> a;

    cout << "Enter a float: ";
    cin >> b;

    cout << "Enter a string";
    cin >> c;

    s.display(a);
    s.display(b);
    s.display(c);
}

