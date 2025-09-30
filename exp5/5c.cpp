#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    int ISBN;
    string Title;
    string Author;
    int price;
    
    void input() {
        cout << "Enter ISBN: ";
        cin >> ISBN;
        cin.ignore();
        
        cout << "Enter Title: ";
        getline(cin, Title);
        
        cout << "Enter Author: ";
        getline(cin, Author);
        
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();
    }

    void print() {
        cout << "ISBN: " << ISBN << "\n";
        cout << "Title: " << Title << "\n";
        cout << "Author: " << Author << "\n";
        cout << "Price: " << price << "\n";
    }
};

int main() {
    Book b[5]; 
    for(int i = 0; i < 5; i++) {
        cout << "\nEnter details of Book " << i+1 << ":\n";
        b[i].input();
    }
    
    for(int i = 0; i < 5; i++) {
        cout << "\nDetails of Book " << i+1 << ":\n";
        b[i].print();
    }
    
    return 0;
}
