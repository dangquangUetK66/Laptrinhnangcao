#include <iostream>

using namespace std;

bool condition1 (string s) {
    if (s.size() >= 6 && s.size() <= 15) {
        return true;
    } else {
        return false;
    }
}

bool condition2 (string s) {
    bool check = true;
    for (int i = 0; i < s.size(); ++ i) {
        if (!(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9')) {
            check = false;
            break;
        }
    }

    return check;
}

bool condition3 (string s) {
    if (s[0] >= '0' && s[0] <= '9') {
        return false;
    } else return true;
}

int main () {
    string s;
    cin >> s;

    if ((condition1(s) == true) && (condition2(s) == true) && (condition3(s) == true)) {
        cout << "Valid username.";
    } else {
        cout << "Invalid username.";
    }

    return 0;
}