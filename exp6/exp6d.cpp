// d)	Create a class with a static variable to count how many objects were created using the constructor.
#include <iostream>
using namespace std;
class Counter {
    static int count;
public:
    Counter() { count = 0; }
    void plus() { count++; }
    void display() const { cout << "Count: " << count << endl; }
};
int Counter::count = 0;
int main() {
    Counter c;
    c.plus();
    c.display(); 
    c.plus();
    c.display(); 
    return 0;
}