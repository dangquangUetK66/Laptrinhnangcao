#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int query;
    cin >> query;
    
    set<int> s;
    for(int i = 0; i < query; i ++) {
        int y, x;
        cin >> y >> x;
        if (y == 1) {
            s.insert(x);
        }
        
        if (y == 2) {
            s.erase(x);
        }
        
        if (y == 3) {
            set<int>::iterator it;
            it = s.find(x);
            if (it != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    } 
    return 0;
}



