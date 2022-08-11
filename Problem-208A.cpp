// Problem - Dubstep
#include <bits/stdc++.h>
using namespace std;

char* remove_WUP(char* s){
    int n = strlen(s);
    char* p = new char[n + 1];
    int i = 0, j = 0;
    while(s[i]){
        while(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        i += 3;
        while ((s[i] != 'W' || s[i + 1] != 'U' || s[i + 2] != 'B') && s[i] != 0){
            p[j] = s[i];
            ++i; ++j;
        }
        if(s[i] == 0 && (s[i-1] == 'B' && s[i-2] == 'U' && s[i-3] == 'W'))
            j--;
        p[j] = ' ';
        j++;
    }
    if(s[i] == 0 && p[j-1] == ' ')
    p[j-1] = 0;
    return p;
}

int main(){
    char str[201];
    cin.getline(str , 201);
    strcpy(str , remove_WUP(str)); 
    cout << str;
    return 0;
}