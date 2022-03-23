#include <iostream>

using namespace std;

struct Marks {
    int no;
    string name;
    double chem_marks, math_marks, phy_marks;

    Marks () {}
    Marks (int n, string nam, double c, double m, double p)
    {
        no = n;
        name = nam;
        chem_marks = c;
        math_marks = m;
        phy_marks = p;
    }
};

int main () {
    Marks student[5];
    for (int i = 0; i < 5; ++ i) {
        cin >> student[i].no >> student[i].name >> student[i].chem_marks >> student[i].math_marks >> student[i].phy_marks;
    }

    for (int i = 0; i < 5; ++ i) {
        cout << student[i].chem_marks << "" << student[i].math_marks << " " << student[i].phy_marks << endl;
    }

    return 0;
}