//d)	Write a program to search for a number entered by user from an array of 10 numbers. Sort the array before searching.
#include <iostream>
using namespace std;

void ss(int* a, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the number to be searched: ";
    int s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int i = 0;
    int left = 0;
    int right = n - 1;
    bool found = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (a[mid] == s) {
            cout << "It is at position: " << mid + 1 << " (after sort)";
            found = true;
            break;
        }
        else if (a[mid] < s) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        cout << "Number not found in the array.";
    }

}
int main(){
    int n, s;
    n = 10;
    int a[10];
    ss(a,n);

}