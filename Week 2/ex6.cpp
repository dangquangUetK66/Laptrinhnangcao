#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    int temp = 0;
    for (int i = -n; i <= n; ++ i) {
        for (int j = -n; j <= n; ++ j) {
            if (temp >= 0) {
                if (j >= -temp && j <= temp) {
                    cout << "* ";
                } else {
                    cout << ". ";
                }
            } else {
                if (j >= temp && j <= -temp) {
                    cout << "* ";
                } else {
                    cout << ". ";
                }
            }
        }
        if (temp == n) {
            temp = -n;
        }
        temp ++;

        cout << endl;
    }

    return 0;
}
