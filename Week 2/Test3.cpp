#include <iostream>

using namespace std;

string convertDecimalToBinary(int number) {
    string temp = "";
    while (number > 0) {
        if (number % 2 == 1) {
            temp += "1";
        } else {
            temp += "0";
        }

        number = number / 2;
    }

    string result = "";

    for (int i = temp.size() - 1; i >= 0 ; -- i) {
        result += temp[i];
    }

    return result;
}

int main () {
    cout << convertDecimalToBinary(118);
    return 0;
}