// e)	Develop a class with a constructor and destructor that display messages to show the order of their execution.

#include <iostream>
using namespace std;

class demo {
    public:
        demo() {
            cout << "Constructor called: Object created." << endl;
        }
        ~demo() {
            cout << "Destructor called: Object destroyed." << endl;
        }
};
int main() {
    cout << "Creating first object d1." << endl;
    demo d1;
    {
        cout << "Creating second object d2 inside a block." << endl;
        demo d2;
        cout << "Exiting the block." << endl;
    }
    cout << "Back to main function." << endl;
    return 0;
} 