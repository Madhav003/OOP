#include <iostream>
using namespace std;
class num{
    public:
    int max(int a,int b){
        if(a>b){
            cout << a << " is larger";
            return a;
        }
        else if(b > a){
            cout << b << " is larger";
            return b;
        }
        else if(a == b){
            cout << "Both are equal";
            return 1;
        }
        else{
            cout << "Unexpected error occoured";
            return 0;
        }
    }
};

int main(){
    num n;
    int a,b;
    cin >> a;
    cin >> b;
    n.max(a,b);
}