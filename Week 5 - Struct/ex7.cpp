#include <iostream>

using namespace std;

struct Student
{
    int no;
    string name;
    int age;
    string address;

    Student () {}
    Student (int n, string nam, int ag, string ad)
    {
        no = n;
        name = nam;
        age = ag;
        address = ad;
    }
};

void func1 (int num_students, Student array[]) {
    for (int i = 0; i < num_students; i++) {
        if (array[i].age == 14) {
            cout << "Student " << array[i].name << " is 14 years old." << endl;
        }
    }
}

void func2 (int num_students, Student array[]) {
    for (int i = 0; i < num_students; i++) {
        if (array[i].no % 2 == 0) {
            cout << "Student " << array[i].name << " is even." << endl;
        }
    }
}

int main () {
    int num_students;
    cin >> num_students;

    Student array[num_students];
    for (int i = 0; i < num_students; i++) {
        cin >> array[i].no >> array[i].name >> array[i].age >> array[i].address;
    }

    func1 (num_students, array);

    cout << endl;

    func2 (num_students, array);

    return 0;
}
