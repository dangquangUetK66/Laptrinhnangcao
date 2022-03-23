#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;
    string array[n];
    for (int i = 0; i < n; ++ i) {
        cin >> array[i];
        for (int k = 0; k < array[i].size(); ++ k) {
            for (int j = i + 1; j < array[i].size(); ++ j) {
                if (array[i][k] > array[i][j]) {
                    swap(array[i][k], array[i][j]);
                }
            }
        }
    }
    for (int i = 0; i < n; ++ i) {
        cout << array[i] << endl;
    }

    return 0;


}