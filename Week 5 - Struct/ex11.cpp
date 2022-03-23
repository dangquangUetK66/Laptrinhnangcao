#include <iostream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;

    Date () {}
    Date (int _day, int _month, int _year) {
        day = _day;
        month = _month;
        year = _year;
    }
};

int main () {
    int d, m, y;
    cout << "Enter the day: ";
    cin >> d >> m >> y;

    Date today (d, m, y);
    Date next[46];
    next[0] = today;

    for (int i = 1; i <= 45; ++ i) {
        next[i].day = next[i - 1].day + 1;
        next[i].month = next[i - 1].month;
        next[i].year = next[i - 1].year;

        if (next[i].day > 31 && (next[i].month == 1 || next[i].month == 3 || next[i].month == 5 || next[i].month == 7 || next[i].month == 8 || next[i].month == 10)) {
            next[i].day -= 31;
            next[i].month += 1;
        } else if (next[i].day > 30 && (next[i].month == 4 || next[i].month == 6 || next[i].month == 9 || next[i].month == 11)) {
            next[i].day -= 30;
            next[i].month += 1;
        } else if (next[i].day > 28 && next[i].month == 2) {
            next[i].day -= 28;
            next[i].month += 1;
        } else if (next[i].day > 29 && next[i].month == 2 && next[i].year % 4 == 0) {
            next[i].day -= 29;
            next[i].month += 1;
        } else if (next[i].day > 29 && next[i].month == 2 && next[i].year % 4 != 0) {
            next[i].day -= 28;
            next[i].month += 1;
        } else if (next[i].day > 31 && (next[i].month == 12)) {
            next[i].day -= 31;
            next[i].month = 1;
            next[i].year += 1;
        }
    }

    cout << "The next 45 days are: " << endl;
    cout << next[45].day << "/" << next[45].month << "/" << next[45].year << endl;

    return 0;
}
