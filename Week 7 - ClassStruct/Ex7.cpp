#include <iostream>
#include <vector>

using namespace std;

class Employee {
    string name;
    int year_joining;
    string address;

    public: 
    Employee () {}
    Employee (string n, int y, string a) {
        name = n;
        year_joining = y;
        address = a;
    }

    void print () {
        cout << name << "\t" << year_joining << "\t" << address << endl;
    }
};

int main () {
    int i = 3;
    vector <Employee> e;
    while (i --) {
        string name;
        int year_join;
        string address;
        cin >> name >> year_join >> address;
        Employee temp (name, year_join, address);
        e.push_back(temp);
    }

    cout << "Name" << "\t" << "Year of joinning" << "\t" << "Address" << endl;
    for (int i = 0; i < e.size(); ++ i) {
        e[i].print();
    }

    return 0;
}