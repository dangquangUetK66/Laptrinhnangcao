#include <iostream>

using namespace std;

class Student {
    string name;
    int roll_no;

    public:
        Student () {
            name = "John";
            roll_no = 2;
        }
        Student (string n, int r) {
            name = n;
            roll_no = r;
        }

        void print () {
            cout << roll_no << " " << name << endl;
        }
};

int main () {
    Student s1;
    s1.print();
    return 0;
}