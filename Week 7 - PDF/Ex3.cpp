#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    vector <int> array (n);
    for (int i = 0; i < n; i ++) {
        cin >> array[i];
    }  
    int x,a,b;
    cin >> x >> a >> b;
    
    array.erase (array.begin()+n-1);
    array.erase (array.begin()+a-1, array.begin() +b-2);
    
    cout << array.size() << endl;
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    return 0;
}
