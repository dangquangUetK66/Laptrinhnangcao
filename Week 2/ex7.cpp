#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long double fraction (int x) {
    if (x == 1) return 1;
    return x * fraction(x - 1);
}

int main () {
    int x;
    cin >> x;
    
    int i = 1;
    double sum = 1;
    double oldSum = 0;

    while (sum - oldSum > 0.001) {
        oldSum = sum;
        sum += pow(x, i) / fraction(i);
        i ++;
    }

    cout << fixed << setprecision(4) << sum;
    return 0;
}
