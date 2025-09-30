// c)	Write a program to define a class 'Point' and implement a copy constructor to initialize one object with another.

#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int x, int y){
        cout<< "Parameter Constructor y'all "<< endl;
    }
    Point (Point& a){
        cout << "This is a copy constructor";
    }
};

int main(){
    Point P(10,11);
    Point Q(P);
}