#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_N = 10000;

int main () {
    int n;
    cin >> n;

    double array[MAX_N];
    double sum = 0;
    for (int i = 0; i < n; ++ i) {
        cin >> array[i];
        sum += array[i];
    }

    double mean = sum * 1.0 / n;

    double result = 0.0;

    for (int i = 0; i < n; ++ i) {
        result = result + (array[i] - mean) * (array[i] - mean);
    }

    result = result / n;

    cout << fixed << setprecision(2) << result << endl;

    return 0;

}
