//d)	 Define an abstract class 'Shape' with a pure virtual function area(), and derive classes 'Triangle', 'Rectangle' to implement it.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0; // Pure virtual function
};
class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    float area() {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    float width, height;
public:
    Rectangle(float w, float h) : width(w), height(h) {}
    float area() {
        return width * height;
    }
};
int main() {
    Shape* shape1 = new Triangle(5, 10);
    Shape* shape2 = new Rectangle(4, 6);

    cout << "Area of Triangle: " << shape1->area() << endl;
    cout << "Area of Rectangle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}