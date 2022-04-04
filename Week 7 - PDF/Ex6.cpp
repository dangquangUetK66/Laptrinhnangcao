#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int query;
    cin >> query;
    
    map <string, int> mp;
    for (int i = 0; i < query; ++ i) {
        int x;
        string name;
        cin >> x >> name;
        
        if (x == 1) {
            int marks;
            cin >> marks;
            
            mp[name] += marks;
        }
        
        if (x == 2) {
            mp[name] = 0;
        }
        
        if (x == 3) {
            cout << mp[name] << endl;
        }
    } 
    return 0;
}



