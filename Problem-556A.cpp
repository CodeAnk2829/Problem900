#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char str[n + 1];
    cin.ignore();
    cin.getline(str, n + 1);
    int count_zeros = count(str, str + n , '0');
    int count_ones = count(str, str + n, '1');
    int min_of_two = min(count_zeros, count_ones);
    cout << (n - (2 * min_of_two));

    return 0;
}