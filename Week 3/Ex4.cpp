#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector <double> array;
    for (int i = 0; i < n; ++ i) {
        double x;
        cin >> x;

        array.push_back(x);
    }

    double k;
    cin >> k;

    array.push_back(k);
    sort(array.begin(), array.end());

    for (int i = 0; i < array.size(); ++ i) {
        cout << fixed << setprecision(2) << array[i] << " ";
    }

    return 0;
}