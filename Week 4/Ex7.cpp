#include <iostream>

using namespace std;

void readArray(int a[], int n) {
    for (int i = 0; i < n; ++ i) {
        cin >> a[i];
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; ++ i) {
        cout << a[i] << " ";
    }
}

int main () {
    int n = 5;
    int a[n];
    readArray(a, n);
    printArray(a, n);

    return 0;
}