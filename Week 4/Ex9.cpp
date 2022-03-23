#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

void sortAscending (float array[], int size) {
    sort (array, array + size);
}

bool func (float a, float b) {
    return (a > b);
}

void sortReserveAscending (float array[], int size) {
    sort (array, array+size, func);
}
void sort(float array[], int size, bool isAscending) {
    if (isAscending == true) {
        sortAscending(array, size);
    } else {
        sortReserveAscending(array, size);
    }
}

int main () {
    int n;
    cin >> n;

    float array[n + 5];
    for (int i = 0; i < n; ++ i) {
        cin >> array[i];
    }

    sort(array, n, true);

    for (int i = 0; i < n; ++ i) {
        cout << array[i] << " ";
    }

    return 0;
}