#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#include <iostream>
using namespace std;

void printStar (int n) {
    for (int i = 0; i < n; ++ i) {
        cout << "*";
    }
}

void printSpace (int n) {
    for (int i = 0; i < n; ++ i) {
        cout << " ";
    }
}

void printArrowLeft (int n) {
    int temp1 = 0;
    int temp2 = n;
    for (int i = 0; i < 2 * n - 1; ++ i) {
        printSpace(temp1);
        printStar(temp2);
        cout << endl;

        if (i < n - 1) {
            temp1 += 2;
            temp2 -= 1;
        } else {
            temp1 -= 2;
            temp2 += 1;
        }
    }
}

void printArrowRight (int n) {
    int temp1 = n - 1;
    int temp2 = n;
    for (int i = 0; i < 2 * n - 1; ++ i) {
        printSpace(temp1);
        printStar(temp2);
        cout << endl;

        if (i < n - 1) {
            temp1 --;
            temp2 --;
        } else {
            temp1 ++;
            temp2 ++;
        }
    }
}
void printArrow(int n, bool left) {
    if (left == 0) {
        printArrowLeft(n);
    } else {
        printArrowRight(n);
    }

}

int main () {
    int n, left;
    cin >> n >> left;
    printArrow(n, left);

    return 0;
}