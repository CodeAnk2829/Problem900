// Problem - Gravity Flip
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    for(int r = 1; r < n; ++r){
        for(int i = 0; i < n-r; ++i){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}