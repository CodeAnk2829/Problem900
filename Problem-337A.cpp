// Problem - Puzzles
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector <int> v;
    int temp = m;
    while(temp--){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    int diff = v[m-1] - v[0];
    
    for(int i = m - 1; i >= (n - 1); --i){
        if((v[i] - v[i - (n - 1)]) < diff){
            diff = (v[i] - v[i - (n - 1)]);
        }
    }
    cout << diff;
    return 0;
} 