#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int count = 0;
    cin >> n;
    int *p = new int[n];
    int *t = new int[n];
    int *s = new int[n];
    vector<pair<int,int>> point;
    int start = 0;
    int pointchange = 2; // 1이면 양수 0 이면 음수,미정이면 2 경계 체크
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    for(int i = 0; i < n; i++){
        s[i] = p[i] - t[i];
        if(pointchange == 2){
            if(s[i] > 0){
                pointchange = 1;
            }
            else if(s[i] < 0){
                pointchange = 0;
            }
            else continue;
        }
        if(s[i] == 0){
            if(i != 0){
                point.emplace_back(start,i - 1);
                start = i;
                pointchange = 2;
            }
            
        }
        if(s[i] < 0 && pointchange == 1){
            if(i != 0){
                point.emplace_back(start,i - 1);
                start = i;
                pointchange = 0;
            }
            else{
                pointchange = 0;
            }
        }
        else if(s[i] > 0 && pointchange == 0){
            if(i != 0){
                point.emplace_back(start,i - 1);
                start = i;
                pointchange = 1;
            }
            else{
                pointchange = 0;
            }
        }
        else{
            if(i == n - 1){
                point.emplace_back(start,i);
            }
            continue;
        }

    }
    
    for(int i = 0; i < point.size(); i++){
        while(1){
            if(t[point[i].first] == p[point[i].first]){
                point[i].first++;
                if(point[i].first== point[i].second){
                    break;
                }
                continue;
            }
            if(t[point[i].second] == p[point[i].second]){
                if(point[i].first== point[i].second){
                    break;
                }
                point[i].second --;
                continue;
            }
            else if(t[point[i].first] < p[point[i].first]){
                for(int j = point[i].first; j <= point[i].second; j++){
                    t[j] ++;
                }
                count ++;
            }
            else{
                for(int j = point[i].first; j <= point[i].second; j++){
                    t[j] --;
                }
                count ++;
            }
        }
    }
    cout << count;
}