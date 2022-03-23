#include <iostream>

using namespace std;

struct student {
    int no;
    string name;
    int age;
    string address;
    double mark;

    student () {}
    student (int _no, string _name, int _age, string _address, double _mark) {
        no = _no;
        name = _name;
        age = _age;
        address = _address;
        mark = _mark;
    }
};

int main () {
    student array[15];

    for (int i = 0; i < 15; ++ i) {
        cin >> array[i].no >> array[i].name >> array[i].age >> array[i].address >> array[i].mark;
    }

    for (int i = 0; i < 15; ++ i) {
        cout << array[i].no << " " << array[i].name << " " << array[i].age << " " << array[i].address << " " << array[i].mark << endl;
    }

    return 0;
}