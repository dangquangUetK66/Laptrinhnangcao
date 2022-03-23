#include <iostream>

using namespace std;

struct employee {
    string name;
    float salary;
    int hour_per_day;

    employee () {}
    employee (string nam, float sal, int hour) {
        name = nam;
        salary = sal;
        hour_per_day = hour;
    }
};

int main () {
    employee array[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter name: ";
        cin >> array[i].name;
        cout << "Enter salary: ";
        cin >> array[i].salary;
        cout << "Enter hour per day: ";
        cin >> array[i].hour_per_day;
    }

    for (int i = 0; i < 10; ++ i) {
        if (array[i].hour_per_day >= 8 && array[i].hour_per_day < 10) {
            array[i].salary += 50;
        } else if (array[i].hour_per_day >= 10 && array[i].hour_per_day < 12) {
            array[i].salary += 100;
        } else if (array[i].hour_per_day >= 12) {
            array[i].salary += 150;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << array[i].name << " " << array[i].salary << endl;
    }

    return 0;
}