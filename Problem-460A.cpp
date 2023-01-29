// Problem - Vasya and Socks
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int p = ((n - 1) / (m - 1));
    int result = n + p;
    cout << result;
    return 0;
}