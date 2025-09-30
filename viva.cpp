#include <iostream>
#include <string>
using namespace std;

class book {
public:
    string name;
    float mrp;
    float selling;
};

int main() {
    book b1, b2;

    cout << "Enter name of book: ";
    getline(cin, b2.name);
    cout << "Enter MRP of book: ";
    cin >> b2.mrp;
    b2.selling = b2.mrp - (b2.mrp * 0.2);
    cin.ignore();
    cout << "Name: " << b2.name << endl;
    cout << "MRP: " << b2.mrp << endl;
    cout << "Selling price: " << b2.selling << endl;

    cout << "Enter name of book: ";
    getline(cin, b1.name);
    cout << "Enter MRP of book: ";
    cin >> b1.mrp;
    b1.selling = b1.mrp - (b1.mrp * 0.2);
    cout << "Name: " << b1.name << endl;
    cout << "MRP: " << b1.mrp << endl;
    cout << "Selling price: " << b1.selling << endl;

    return 0;
}
