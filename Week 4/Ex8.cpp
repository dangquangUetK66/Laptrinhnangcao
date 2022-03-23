#include <iostream>

using namespace std;

void readArray(int array[], int n) {
    for (int i = 0; i < n; ++ i) {
        cin >> array[i];
    }
}

bool compareArray(int array1[], int array2[], int n) {
    bool check = true;
    for (int i = 0; i < n; ++ i) {
        if (array1[i] != array2[i]) {
            check = false;
            break;
        }
    }
    
    return check;
}

int main () {
    int n;
    cin >> n;
    int array1[n], array2[n];
    readArray(array1, n);
    readArray(array2, n);
    if(compareArray(array1, array2, n)){
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}