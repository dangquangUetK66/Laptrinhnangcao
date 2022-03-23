#include <iostream>
#include <cmath>

using namespace std;

int maxThree(int a, int b, int c) {
    return max(max(a,b),c);
}

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    cout << maxThree(a, b, c);

    return 0;
}