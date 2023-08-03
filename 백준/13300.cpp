#include <bits/stdc++.h>

using namespace std;

int arr[2][7] = {0,};
int main(){
    int n, k;
    cin >> n >> k;
    int a, b;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        arr[a][b] ++;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 7; j++){
            if(arr[i][j]!= 0){
                if(arr[i][j] %k == 0){
                    count += (arr[i][j]/k);
                }
                else{
                    count += (arr[i][j]/k + 1);
                }
            }
        }
    }
    cout << count;
}