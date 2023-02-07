#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n;
    cin >> m >> n;
    int **arr = new int*[n];
    int endingCheck;
    int zeroCount = 0;
    int dayCount = 0;
    int changeNum = 0;
    vector<pair<int,int>> p;     
    for(int i = 0; i < n; i++){
        arr[i] = new int[m];
    }
    for(int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    while(1){
        changeNum = zeroCount;
        zeroCount = 0;
        for(int i = 0; i < n; i ++){
            for (int j = 0; j < m; j++){
                if(arr[i][j] == 1){
                    if(i == 0){
                        if(j == 0){
                          p.emplace_back(i,j + 1);  
                          p.emplace_back(i + 1,j);  
                        }
                        else if(j == m - 1){
                            p.emplace_back(i,j - 1);  
                            p.emplace_back(i + 1,j);  
                        }
                        else{
                            p.emplace_back(i,j - 1);  
                            p.emplace_back(i,j + 1);  
                            p.emplace_back(i + 1,j);  
                        }
                    }
                    else if(i == n - 1){
                        if(j == 0){
                          p.emplace_back(i,j + 1);  
                          p.emplace_back(i - 1,j);  
                        }
                        else if(j == m - 1){
                            p.emplace_back(i,j - 1);  
                            p.emplace_back(i - 1,j);  
                        }
                        else{
                            p.emplace_back(i,j - 1);  
                            p.emplace_back(i,j + 1);  
                            p.emplace_back(i - 1,j);  
                        }
                    }
                    else{
                        if(j == 0){
                            p.emplace_back(i,j + 1);  
                            p.emplace_back(i + 1,j);  
                            p.emplace_back(i - 1,j);  
                        }
                        else if(j == m - 1){
                            p.emplace_back(i,j - 1);  
                            p.emplace_back(i + 1,j);  
                            p.emplace_back(i - 1,j);   
                        }
                        else{
                            p.emplace_back(i,j - 1);  
                            p.emplace_back(i,j + 1);  
                            p.emplace_back(i + 1,j);  
                            p.emplace_back(i - 1,j);  
                        }
                    }
                    
                }
                if(arr[i][j] == 0){
                    zeroCount++;
                }
            }
        }
        if(zeroCount == 0){
            break;
        }
        else if(zeroCount == changeNum){
            cout << "-1";
            return 0;
        }
        for(int i = 0; i < p.size(); i++){
            if(arr[p[i].first][p[i].second] == -1)continue;
            else arr[p[i].first][p[i].second] = 1;
        }
        p.clear();
        dayCount++;
    }
    cout << dayCount;
    

}

