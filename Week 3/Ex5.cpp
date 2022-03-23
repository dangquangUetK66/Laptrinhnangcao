#include <iostream>
#include <vector>

using namespace std;

bool isSymmetry (vector <int> arr);

int main () {
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; ++ i) {
        int x;
        cin >> x;

        arr.push_back(x);
    }
    if (isSymmetry(arr)) {
        cout << "Symmetric array.";
    } else {
        cout << "Asymmetric array.";
    }

    return 0;
}


bool isSymmetry (vector <int> arr) {
    bool check = true;
    if (arr.size() % 2 == 0) {
        for (int i = 0; i <= arr.size() / 2 - 1; ++ i) {
            if (arr[i] != arr[arr.size() - 1 - i]) {
                check = false;
                break;
            }
        }
    } else if (arr.size() % 2 == 1) {
        for (int i = 0; i <= (arr.size() - 3) / 2; ++ i) {
            if (arr[i] != arr[arr.size() - 1 - i]) {
                check = false;
                break;
            }
        }
    }

    return check;
}