#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    int n, m;
    int x1, x2, y1, y2;
    cin >> n >> m;
    int **arr;
    arr = new int*[n]();
    int **sum ;
    sum = new int*[n]();
    int total;
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
        sum[i] = new int[n]();
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n; j++){
            cin >> arr[i][j];
            if(j == 0)sum[i][j] = arr[i][j];
            else
            sum[i][j] += sum[i][j-1] + arr[i][j];
        }

    }
    for(int i = 0; i < m; i++){
        total = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        x2--;
        y1--;
        y2--;
        if(x1 == x2){
            if(y1!=0)
            total = sum[x2][y2] - sum[x1][y1-1];
            else
            total = sum[x2][y2];

        }
        else{
            for(int j = x1; j <= x2;j++){
                if(j == x1){
                    if(y1!=0){
                        total += sum[j][y2] - sum[j][y1-1];
                    }
                    else total += sum[j][y2];

                    // cout << total << "\n";
                }
                else if(j == x2){
                    if(y1!=0){
                    total += sum[j][y2] -sum[j][y1-1];
                    // cout << total << "\n";
                    }
                    else total += sum[j][y2];
                }
                else{ 
                    if(y1!=0){
                        total += sum[j][n-1] - sum[j][y1-1];
                    }
                    else
                    total += sum[j][y2];
                    // cout << total << "\n";
            
                }
            }
        }
    cout << total << "\n";

    }
}