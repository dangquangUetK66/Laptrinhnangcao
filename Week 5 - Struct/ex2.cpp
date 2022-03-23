#include <iostream>

using namespace std;

struct student {
    int no;
    string name;
    int age;

    student () {}
    student (int _no, string _name, int _age) {
        no = _no;
        name = _name;
        age = _age;
    }
};

int main () {
    student array[5];
    for (int i = 0; i < 5; ++ i) {
        array[i].no = i + 1;
        cin >> array[i].name >> array[i].age;
    }

    cout << array[1].no << " " << array[1].name << " " << array[1].age;

    return 0;
}