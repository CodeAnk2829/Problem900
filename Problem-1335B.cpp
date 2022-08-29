// Problem - Construct the String
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        char* str = new char[n + 1];
        char j = 'a';
        for(int i = 0, count = 1; i < n; ++i, ++j, ++count) {
            str[i] = j;
            if(count == b){
                count = 0;
                j = 96;
            }
        }
        str[n] = 0;
        cout << str << endl;
    }
    return 0;
}