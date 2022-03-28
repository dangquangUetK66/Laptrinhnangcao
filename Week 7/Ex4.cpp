#include <iostream>

using namespace std;

int main () {
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < s.size() - 1; ++ i) {
        if (s[i] == s[i + 1]) {
            result = result + s[i] + "*";
        } else {
            result = result + s[i];
        }
    }

    result += s[s.size() - 1];

    cout << result << endl;
    return 0;
}