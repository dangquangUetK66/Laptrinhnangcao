#include <iostream>

using namespace std;

const int MAX_ELEMENT = 10000;

int main () {
    bool check = true;
    int n;
    cin >> n;

    int array1[MAX_ELEMENT];
    int array2[MAX_ELEMENT];

    for (int i = 0; i < n; ++ i) {
        cin >> array1[i];
    }

    for (int i = 0; i < n; ++ i) {
        int x;
        cin >> x;

        if (x != array1[i]) {
            check = false;
        }
    }
    
    string s = check ? "YES" : "NO";
    cout << s;
    return 0;
}