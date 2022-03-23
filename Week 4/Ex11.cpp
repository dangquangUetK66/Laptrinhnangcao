#include <algorithm>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

string pigLatin(string s) {
    if (s[0] == 'u' || s[0] == 'e' || s[0] == 'a' || s[0] == 'o' || s[0] == 'i') {
        s = s + "way";
    } else {
        int n = s.size();
        char temp = s[0];
        s.erase (s.begin() + 0);
        s = s + temp + "ay";
    }
    
    return s;
}

int main () {
    string word;
    cin >> word;
    cout << pigLatin(word);

    return 0;
}