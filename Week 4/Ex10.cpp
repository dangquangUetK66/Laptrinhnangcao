#include <iostream>

using namespace std;

string toLower (string s) {
    for (int i = 0; i < s.size(); ++ i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    
    return s;
}

int main () {
    string s;
    getline (cin, s);

    string result = toLower(s);
    cout << result;

    return 0;
}