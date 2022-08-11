// Problem - IIYA and Bank Account
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 0){
        cout << n;
    }else{
        int ld = -(n % 10);
        int sld = ((-(n % 100)) + (n % 10)) / 10;
        if(sld <= ld){
            n = n / 10;
        }else{
            n = (n / 10) + (sld - ld);
        }
        cout << n;
    }

    return 0;
}