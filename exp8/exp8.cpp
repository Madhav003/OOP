#include <iostream>
using namespace std;

class Distance {
    double meters;

public:
    Distance() : meters(0.0) {}

    Distance(int centimeters)
        : meters(centimeters / 100.0) {
        cout << "Converted int (" << centimeters << " cm) to Distance\n";
    }

    Distance(double m) : meters(m) {
        cout << "Converted double (" << m << " m) to Distance\n";
    }

    operator double() const {
        cout << "Converted Distance to double (meters)\n";
        return meters;
    }

    explicit operator int() const {
        cout << "Converted Distance to int (centimeters)\n";
        return static_cast<int>(meters * 100);
    }

    Distance operator+(const Distance& other) const {
        return Distance(meters + other.meters);
    }

    void print() const {
        cout << meters << " meters\n";
    }
};

int main() {
    Distance walkInCm = 750;
    Distance walkInMeters = 1.25;

    walkInCm.print();
    walkInMeters.print();

    double meters = walkInCm;
    int centimeters = (int)walkInMeters;

    cout << "meters from walkInCm = " << meters << "\n";
    cout << "centimeters from walkInMeters = " << centimeters << "\n";

    Distance total = walkInCm + walkInMeters;
    total.print();
    return 0;
}
