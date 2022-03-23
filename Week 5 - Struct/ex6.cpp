#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;

    Complex (double r, double i) {
        real = r;
        imag = i;
    }
    Complex () {}
};

Complex add (const Complex& a, const Complex& b) {
    Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

Complex subtract (const Complex& a, const Complex& b) {
    Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

Complex multiply (const Complex& a, const Complex& b) {
    Complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}

int main () {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    Complex a(x1, y1), b(x2, y2);
    Complex c = add(a, b);
    Complex d = subtract(a, b);
    Complex e = multiply(a, b);

    cout << c.real << " " << c.imag << endl;
    cout << d.real << " " << d.imag << endl;
    cout << e.real << " " << e.imag << endl;

    return 0;
}