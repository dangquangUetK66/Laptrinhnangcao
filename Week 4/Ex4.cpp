#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

long long int factorial(int n) {
    long long int result = 1;
    for (int i = 2; i <= n; ++ i) {
        result = result * i;
    }
    
    return result;
}

int main () {
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}