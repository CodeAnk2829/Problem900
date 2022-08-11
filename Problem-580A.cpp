#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long int *arr = new long int[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int count = 1, max_count = 1;
    for(int i = 0; i < n-1; ++i){
        if(arr[i] <= arr[i + 1])
        count++;
        else
        count = 1;
        if(count > max_count){
            max_count = count;
        }
    }
    cout << max_count;
    return 0;
}