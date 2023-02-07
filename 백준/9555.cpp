#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int n, m;
    int count;
    int school[101] = {0,};
    for(int i = 0; i < t; i++){
        for(int l = 1; l < 101; l++){
            school[l] = 0;
        }
        count = 0;
        cin >> n >> m;
        int** arr = new int*[n]; 
        for(int i = 0; i < n; i++) 
            arr[i] = new int[m];

        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cin >> arr[j][k];
            }
        }
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(arr[j][k] == -1)continue;
                else{
                    if(j == 0){
                        if(k == 0){
                            if(arr[j][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                        else if(k == m - 1){
                            if(arr[j][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                        else{
                            if(arr[j][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                    }
                    else if(j == n - 1){
                        if(k == 0){
                            if(arr[j][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                        else if(k == m - 1){
                            if(arr[j][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                        else{
                            if(arr[j][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                    }

                    else{
                        if(k == 0){
                            if(arr[j][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                        else if(k == m - 1){
                            if(arr[j][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                        else{
                            if(arr[j][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j + 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k + 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k - 1] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                            if(arr[j - 1][k] == arr[j][k]){
                                school[arr[j][k]] = 1;
                                continue;
                            }
                        }
                    }
                }
            }
        }
        for(int l = 1; l < 101; l++){
                if(school[l] == 1){
                    count ++;
                    // cout << l << " ";
                }
                // cout << l << " : " <<school[l] <<"\n";
            
            }
        cout << count << "\n";
    }
}