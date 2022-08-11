// Problem - Twins
#include <iostream>
using namespace std;
void sort(int *p , int n){
    for(int r = 1 ; r < n ; ++r){
        for(int i = 0 ; i < n-r ; ++i){
            if(p[i] < p[i+1]){
                int temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    sort(a , n);

    int i;
    int sum = 0;
    for(i = 0 ; i < n ; ++i){
        int sum_of_remaining = 0;
        sum += a[i];
        for(int j = i+1 ; j < n ; ++j){
            sum_of_remaining += a[j];
        }
        if(sum > sum_of_remaining){
            break;
        }
    }
    cout << i+1 ;
    return 0;
}