// Problem - Sale
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    int count_earnings = 0;

    for (int i = 0; i < n; ++i) {
        if(v.at(i) < 0) {
            sum += (-(v.at(i)));
        }

        count_earnings++;

        if (count_earnings == m) {
            break;
        }
    }
    cout << sum;
    return 0;
}