#include <iostream>

using namespace std;

int main () {
    int animal, leg;
    cin >> animal >> leg;
    bool check = false;
    
    for (int i = 0; i <= animal; ++ i) {
        if (2 * i + 4 * (animal - i) == leg) {
            cout << "chicken = " << i << ", dog = " << animal - i;
            check = true;
            break;
        }
    }
    
    if (check == false) {
        cout << "invalid";
    }
    
    return 0;
}
