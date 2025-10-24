//c)	 Develop a simple program with a base class 'Shape' and derived classes 'Circle', 'Square' to demonstrate hierarchical inheritance.

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual float area() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area() {
        return M_PI * radius * radius;
    }
};

class Square : public Shape {
private:
    float side;
public:
    Square(float s) : side(s) {}
    float area() {
        return side * side;
    }
};

int main() {
    Shape* shape1 = new Circle(5);
    Shape* shape2 = new Square(4);

    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Area of Square: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}