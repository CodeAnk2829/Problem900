// Problem - GCD Partition
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        ll partition = 0;
        ll gcd = 1;
        for(int i = 0; i < n - 1; ++i) {
            partition += a[i];
            sum -= a[i];
            ll temp = __gcd(sum, partition);
            gcd = max(gcd, temp); 
        }
        cout << gcd << endl;

    }
    return 0;
}