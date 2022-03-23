#include <iostream>

using namespace std;

int main () {
    string s;
    getline (cin, s);

    int firstAlpha;

    for (int i = 0; i < s.size(); ++ i) {
        if (s[i] != ' ') {
            firstAlpha = i;
            break;
        }
    }

    for (int i = 0; i < firstAlpha; ++ i) {
        cout << s[i];
    }
    
    for (int i = firstAlpha; i < s.size(); ++ i) {
        if (!(s[i] == ' ' && s[i+1] == ' ')) {
            cout << s[i];
        }
    }

    return 0;
}