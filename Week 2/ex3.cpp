#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int lower, upper;
    cin >> lower >> upper;

    int sqrtLower = ceil(sqrt(lower));
    int sqrtUpper = floor(sqrt(upper));

    for (int i = sqrtLower; i <= sqrtUpper; ++ i) {
        cout << i * i << " ";
    }

    return 0;
}
