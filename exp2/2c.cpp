#include <iostream>
using namespace std;

int main(){
        int j;
    cout << "Enter another integer: ";
    cin >> j;
    if(j > -1){
        int fact = 1;
        for(int k = 1; k <= j; k++){
            fact = fact * k;
        }
        cout << fact << "\n" << endl;
    }
    else{
        cout << "Enter a positive number";
    }
    return 0;
}