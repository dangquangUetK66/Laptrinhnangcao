#include <iostream>
#include <cmath>

using namespace std;

bool isPrime (int number) {
    if (number <= 1) return false;
    else {
        bool check = true;
        for (int i = 2; i < (int)sqrt(number) + 1; ++ i) {
        if (number % i == 0) {
            check = false;
            break;
            }
        }   
        return check;
    }
}

int main () {
    int number;
    cin >> number;
    if(isPrime(number)){
        cout << "Prime.";
    } else {
        cout << "Not a prime.";
    }
    
    return 0;
}