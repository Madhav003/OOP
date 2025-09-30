#include <iostream>
using namespace std;

int tbig(int* a, int n) {
    int tl = a[0], t2l = a[1];

    for (int i = 0; i < n; i++) {
        if (a[i] > tl) {
            t2l = tl;
            tl = a[i];
        }
        else if (a[i] > t2l && a[i] != tl) {
            t2l = a[i];
        }
    }

    return t2l;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    cout << "Enter elements" << endl;
    for(int i = 0; i<n ; i++){
        cin >> a[i];
    }
    
    int t2l = tbig(a, n);
    
    cout << "second largest: " << t2l << endl;
    return 0;
}
