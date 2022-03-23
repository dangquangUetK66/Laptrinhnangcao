#include <iostream>

using namespace std;

struct Distance
{
    float feet;
    float inches;

    Distance () {}
    Distance (float f, float i)
    {
        feet = f;
        inches = i;
    }
};

int main () {
    Distance x, y;
    cin >> x.feet >> y.feet;

    x.inches = 12 * x.feet;
    y.inches = 12 * y.feet;

    cout << x.inches + y.inches << endl;
    cout << x.feet + y.feet << endl;

    return 0;
}

