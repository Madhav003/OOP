// b)	Develop a class 'Box' that uses a parameterized constructor to initialize length, breadth, and height, and display volume.
#include <iostream>
using namespace std;
class Box {
    int length, breadth, height;
public:
    Box(int l, int b, int h) {
        int length = l;
        int breath = b;
        int height = h;
        int volume = l * b * h;
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    Box box(3, 4, 5);
    return 0;
}