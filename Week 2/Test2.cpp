#include <iostream>
#include <cmath>

using namespace std;

int computeGcd(int a, int b) {
    if (b == 0) return a;
    return computeGcd(b, a % b);
}

int main () {
    cout << computeGcd(415,620);

    return 0;
}