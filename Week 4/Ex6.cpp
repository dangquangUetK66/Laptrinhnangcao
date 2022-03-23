#include <iostream>

using namespace std;

double calculate (double num1, char operat, double num2) {
    double result;
    switch (operat) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }

    return result;
}

int main () {
    double num1, num2;
    char operat;

    cin >> num1 >> operat >> num2;
    cout << calculate(num1, operat, num2);

    return 0;
}