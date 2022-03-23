#include <iostream>

using namespace std;

bool compareArray(int a[], int b[], int n) {
    bool isEqual = true;
    for (int i = 0; i < n; ++ i) {
        if (a[i] != b[i]) {
            isEqual = false;
            break;
        }
    }

    return isEqual;
}

int main () {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 4};
    cout << boolalpha << compareArray(a, b, 5);

    return 0;
}