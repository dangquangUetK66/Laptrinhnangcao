#include <iostream>
#include <iomanip>

using namespace std;

const int MAX_N = 10000;

int main () {
    int n;
    cin >> n;
    
    double array[MAX_N];
    for (int i = 0; i < n; ++ i) {
        cin >> array[i];
    }
    
    for (int i = n - 1; i >= 0; -- i) {
        cout << fixed << setprecision(2) << array[i] << " ";
    }
    
    return 0;
}
