#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int *a = new int[n];
    int stop;
    int sum = 0;
    int check;
    int copy;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // for(int i = 0; i < n; i++){
    //     if(a[i] > k){
    //         stop = i-1;
    //         break;
    //     }
    // }
    copy = k;
    for(int i = n - 1; i >= 0; i--){
        if(a[i] > k)continue;
        check = copy / a[i];
        copy = copy - a[i]*check;
        sum += check;
        if(copy == 0)break;
    }
    cout << sum;
}