#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> n>> m;
    int i,j;
    int *sum = new int[n]();
    int *a = new int[n]();
    int c;
    ios::sync_with_stdio(false);
    cin.tie(NULL);  
    for(int k = 0; k < n; k++){
        cin >> a[k];
        if(k == 0)sum[k] = a[k];
        else sum[k] = sum[k-1] + a[k];
    }
    for(int l = 0 ; l < m; l++){
        cin >> i >> j;
        i--;
        j--;
        if(i == 0){
            cout << sum[j] << "\n";
        }
        else
        cout << sum[j] - sum[i-1] << "\n";
    }
    
}
