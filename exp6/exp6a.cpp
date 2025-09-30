// a)	Create a class 'Counter' with a default constructor initializing count to zero, then increment and display the count.
#include <iostream>
using namespace std;
class Counter {
    int count;
public:
    Counter() { count = 0; }
    void plus() { count++; }
    void display() const { cout << "Count: " << count << endl; }
};
int main() {
    Counter c;
    c.plus();
    c.display(); 
    c.plus();
    c.display(); 
    return 0;
}