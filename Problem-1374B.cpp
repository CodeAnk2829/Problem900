// Problem - Multiply by 2, divide by 6
#include <iostream>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        long int n;
        int count = 0;
        cin >> n;
        if(n & (n - 1)){
            while(n > 1){
                if(n % 6 == 0){
                    n /= 6;
                }else if(n % 3 == 0){
                    n *= 2;
                }else{
                    count = -1;
                    break;
                }
                count++;
                if((n & (n - 1)) == 0 && n != 1){
                    count = -1;
                    break;
                }
            }
            cout << count << endl;
        }else if(n == 1){
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}