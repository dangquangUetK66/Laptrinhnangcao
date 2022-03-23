#include <iostream>

using namespace std;

string getString () {
    string s;
    getline (cin,s);

    return s;
}

bool isAlpha (char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

bool isDigit (char c) {
    return (c >= '0' && c <= '9');
}

int main () {
    string s = getString();
    int countAlpha = 0, countDigit = 0, countOther = 0;
    for (int i = 0; i < s.size(); ++ i) {
        if (isAlpha(s[i])) {
            countAlpha ++;
        } else if (isDigit(s[i])) {
            countDigit ++;
        } else {
            countOther ++;
        }
    }

    cout << countAlpha << " " << countDigit << " " << countOther;

    return 0;

}