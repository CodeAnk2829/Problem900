// Problem - Even Odds
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int mid;
    mid = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);
    if(k <= mid){
        cout << (2 * k) - 1;
    }else{
        cout << 2 * (k - mid);
    }
    return 0;
}