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
    vector <int> array;
    int temp1 = n;

    while (temp1 > 0) {
        int element;
        cin >> element;
        array.push_back(element);
        temp1 --;
    }
    
    int q;
    cin >> q;
    vector <int> queries;
    int temp2 = q;
    
    while (temp2 > 0) {
        int query;
        cin >> query;
        queries.push_back(query);
        temp2 --;
    }
    
    for (int i = 0; i < queries.size(); ++ i) {
        vector <int> ::iterator it;
        it = lower_bound(array.begin(), array.end(), queries[i]);
        
        if (array[it - array.begin()] == queries[i]) {
            cout << "Yes " << it - array.begin() + 1 << endl;
        } else {
            cout << "No " << it - array.begin() + 1 << endl;
        }
    }
    return 0;
}
