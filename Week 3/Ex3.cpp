#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int>vc;
    for (int i = 0; i < n; ++ i) {
        int x; cin >> x;
        vc.push_back(x);
    }
    sort(vc.begin(), vc.end());
    
    for (int i = 0; i < vc.size() - 1; ++ i) {
        if (vc[i] == vc[i+1]) {
            vc.erase(vc.begin() + i);
            i = i - 1;
        }
    }

    for (int i = 0; i < vc.size(); ++ i) {
        cout << vc[i] << " ";
    }

    return 0;
}