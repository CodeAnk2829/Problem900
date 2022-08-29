// Problem - Business trip
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v;
    int k;
    cin >> k;
    for(int i = 0; i < 12; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    int count = 0, sum = 0, i;
    for(i = 0; i < 12; ++i) {
        sum += v[i];
        if(k != 0)
        count++;
        if(sum >= k) {
            break;
        }
    }
    if(i == 12) {
        cout << -1;
    } else {
        cout << count;
    }
    
    return 0;
}