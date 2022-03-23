#include <iostream>
#include <cmath>

using namespace std;

int main () {
    long long n;
    cin >> n;
    long long temp = abs(n);

    int count = 0;
    if (n == 0) count = 1;
        else {
            while (temp > 0) {
                temp = temp / 10;
                count ++;
            }
        }

    cout << count;
    return 0;
}
