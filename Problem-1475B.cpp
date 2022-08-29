// Problem - New Year's Number
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int wld = n / 10;
        int ld = n % 10;
        int q = ( n / 10 ) / 202;

        if(wld % 202 == 0 && q >= ld) {
            cout << "Yes" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}