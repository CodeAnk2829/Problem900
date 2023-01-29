// Problem Select Three Sticks
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long long int> v;
        for(int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
       
    
        int minimum_value = v[2] - v[0];
      
        for(int i = 2; i < n; ++i) {
            if(minimum_value > v[i] - v[i - 2]) {
                minimum_value = v[i] - v[i - 2];
            }
        }
        cout << minimum_value << endl;
    }
    return 0;
}