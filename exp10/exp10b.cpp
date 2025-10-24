// Write a program to access private members of a class using pointer to member function.
#include <iostream>
using namespace std;
class Sample {
private:
    int data;
public:
    Sample(int d) : data(d) {}
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Sample obj(42);
    Sample* ptr = &obj;
    (ptr->*(&Sample::display))();
    return 0;
}