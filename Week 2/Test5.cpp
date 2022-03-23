#include <iostream>
#include <cmath>

using namespace std;

int computeGcd(int a, int b) {
    if (b == 0) return a;
    return computeGcd(b, a % b);
}

int main () {
    int a, b;
    cin >> a >> b;

    int temp = computeGcd(abs(a), abs(b));

    int tuSo = abs(a) / temp;
    int mauSo = abs(b) / temp;

    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        if (mauSo == 1) {
            cout << -tuSo;
        } else {
            cout << -tuSo << "/" << mauSo;
        }
    } else {
        if (mauSo == 1) {
            cout << tuSo;
        } else {
            cout << tuSo << "/" << mauSo;
        }
    }

    return 0;
}