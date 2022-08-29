// Problem - Keyboard

#include <bits/stdc++.h>
using namespace std;
int find_index(char* str, char ch) {
    int index;
    for(int i = 0; str[i]; ++i) {
        if(str[i] == ch) {
            index = i;
            return i;
        }
    }
}
int main() {
    char str[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int n = strlen(str);
    char ch;
    cin >> ch;
    cin.ignore();
    char s[101];
    cin.getline(s, 101);
    for(int i = 0; s[i]; ++i) {
        int temp = find_index(str, s[i]);
        if(ch == 'R') {
            cout << str[temp - 1];
        } else {
            cout << str[temp + 1];
        }
    }
    
    return 0;
}