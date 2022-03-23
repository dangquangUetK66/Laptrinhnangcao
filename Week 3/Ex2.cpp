#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
const int MAX_ELEMENT = 10000;
bool compare(double a, double b)
{
  return a > b;
}
int main () {
  int n;
  cin >> n;

  double array[MAX_ELEMENT];
  for (int i = 0; i < n; ++ i) {
    cin >> array[i];
  }

  sort (array, array + n, compare);     //iterator dc viet san

  for (int i = 0; i < n; ++ i) {
    cout << fixed << setprecision(2) << array[i] << " ";
  }

  return 0;
}