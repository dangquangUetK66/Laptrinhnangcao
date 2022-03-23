#include <iostream>

using namespace std;

struct student {
    int no;
    string name;
    int age;
    double mark;

    student () {}
    student (int _no, string _name, int _age, double _mark) {
        no = _no;
        name = _name;
        age = _age;
        mark = _mark;
    }
};

int main () {
    student a (1, "Quang", 18, 5.5);
    cout << a.no << " " << a.name << " " << a.age << " " << a.mark;

    return 0;
}