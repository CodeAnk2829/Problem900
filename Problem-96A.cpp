// Problem - Football
#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[102];
    cin.getline(str , 102);
    int i;
    int count = 0;
    for(i = 0 ; str[i] ; ++i){
        if(str[i] == str[i+1]){
            count ++;
        }else{
            count = 0;
        }
        if(count == 6){
            break;
        }
    }
    if(str[i] == 0){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}