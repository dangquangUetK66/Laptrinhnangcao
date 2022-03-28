#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int n, d;
    cin >> n >> d;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int temp = d % n;
    if (temp != 0) {
        for (int i = 0; i < temp; ++ i) {
            for (int i = 0; i < n - 1; ++ i) {
                swap(array[i], array[i + 1]);
            }
        }
    }

    for (int i = 0; i < n; ++ i) {
        cout << array[i] << " ";
    }

    return 0;
}