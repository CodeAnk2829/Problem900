// Problem - Candies
#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n, x;
        cin >> n;
        for(int k = 2; k <= 31; ++k){
            int i = ((int)pow(2, k) - 1);
            if (n % i == 0)
            {
                x = n / i;
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}