// Problem - HQ9+
#include <iostream>
using namespace std;
int main(){
    char str[101];
    cin.getline(str , 101);
    int i; 
    for(i = 0 ; str[i] ; ++i){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            cout << "YES";
            break;
        }
    } 
    if(str[i] == 0){
        cout << "NO";
    }
    return 0;
}