#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    vector<int>v;
    vector<vector<int>>s;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(v.size() == 0|| v.back()<temp){
            v.push_back(temp);
        }
        else{
            s.push_back(v);
            v.clear();
            v.push_back(temp);

        }
    }
    
    s.push_back(v);
    v.clear();
    int max = 0;
    int dif;
    for(int i = 0; i <s.size(); i++){
        dif = s[i].back() - s[i].front();
        // cout << s[i].back() << " " << s[i].front() << "\n";
        if(dif > max)
        max = dif;
    }
    cout << max;
}