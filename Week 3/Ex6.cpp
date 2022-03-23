#include <iostream>

using namespace std;

int main () {
    string s;

    getline (cin, s);

    int count = 0;
    if (s[0] != ' ') {
        count =  1;
    }

    for (int i = 1; i < s.size(); ++ i) {
        if (s[i] != ' ' && s[i-1] == ' ') {
            count ++;
        }
    }

    cout << count;
    return 0;
}