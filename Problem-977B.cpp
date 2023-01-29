#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b) {
    return a.second < b.second;
}
int main() {
    map<string, int> m;
    int n;
    cin >> n;
    char str[n + 1];
    cin.ignore();
    cin.getline(str, n + 1);
    int i = 0, j;
    while(str[i]) {
        char temp[3];
        j = 0;
        while(str[i] && j < 2) {
            temp[j] = str[i];
            j++; i++;
        }
        temp[j] = 0;
        if(j == 1)
        i--;
        cout << temp << endl;
        // m[temp]++;
    }
    // vector<pair<string, int>> v;
    // for(auto &x : m) {
    //     v.push_back({x.first, x.second});
    // }
    // sort(v.begin(), v.end(), cmp);
    // auto &it = v.back();
    // cout << it.first;
    return 0;
}