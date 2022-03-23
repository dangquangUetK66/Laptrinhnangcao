#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int MAX_N = 10000;

int main () {
    int n;
    cin >> n;
    int temp1 = n, temp2 = n;
    vector <double> A;
    while (temp1 > 0) {
        double element;
        cin >> element;
        A.push_back(element);
        temp1 --;
    }
    vector <double> B;
    while (temp2 > 0) {
        double element;
        cin >> element;
        B.push_back(element);
        temp2 --;
    }

    double sum = 0;
    for (int i = 0; i < n; ++ i) {
        sum += A[i] * B[i];
    }

    cout << fixed << setprecision(2) << sum;
    return 0;
}
