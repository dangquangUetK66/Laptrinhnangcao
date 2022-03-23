#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        double nuaChuVi = (a + b + c) * 1.0 / 2;
        double area;
        area = sqrt(nuaChuVi * (nuaChuVi - a) * (nuaChuVi - b) * (nuaChuVi - c));

        cout << fixed << setprecision(2) << area << endl;
    } else {
        cout << "invalid";
    }
    
    return 0;
}
