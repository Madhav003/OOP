#include <iostream>
#include <string>
using namespace std;

class String {
    string data;
public:
    String() = default;
    explicit String(const string& str) : data(str) {}

    bool operator==(const String& other) const {
        return data == other.data;
    }
};

int main() {
    String a("hello");
    String b("hello");
    String c("world");

    cout << boolalpha;
    cout << "a == b: " << (a == b) << '\n';
    cout << "a == c: " << (a == c) << '\n';

    return 0;
}

