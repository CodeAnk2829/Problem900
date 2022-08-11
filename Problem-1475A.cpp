// Problem - Odd Divisor
#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        long long int n;
        cin >> n;
        int k;
        if((n & (n - 1)) == 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}