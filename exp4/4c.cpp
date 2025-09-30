#include <iostream>
using namespace std;

int merge(int n, int m, int* a, int* b){
    cout << "Values of a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Values of b: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int c[n+m];
    for(int i = 0; i<n; i++){
        c[i] = a[i];
    }
    for(int i = 0; i<m; i++){
        c[i+n] = b[i];
    }
    cout << "Merged: ";
    for(int i = 0; i<(n+m); i++){
        cout << c[i] << " ";
    }
    cout << endl; 
}

int main(){
    int n,m;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of m: ";
    cin >> m;
    int a[n];
    int b[m];
    merge(n,m,a,b);

    return 0;
}