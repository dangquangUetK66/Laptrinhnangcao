#include <iostream>

using namespace std;

class rectangle {
    double length;
    double breadth;
    
    public:
        rectangle () {}
        rectangle (double l, double b) {
            length = l;
            breadth = b;
        }

        double getArea () {
            return length * breadth;
        }
};

int main () {
    double x, y;
    cin >> x >> y;
    rectangle r1(x, y);

    cout << r1.getArea() << endl;
    return 0;
}