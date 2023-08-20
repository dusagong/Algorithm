#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<string, int> &a, const pair<string, int> &b)
{
    
    return a.second > b.second; // first 값이 같지 않다면 더 큰 값이 뒤로 가게 해라!
}
int main(){
    int t;
    cin >> t;
    int n;
    vector<pair<string, int>> vv;
    string a;
    int b;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0 ; j < n; j++){
            cin >> a >> b;

            vv.push_back(make_pair(a,b));
        }
        sort(vv.begin(),vv.end(),compare);
        cout << vv[0].first << "\n";
        vv.clear();
    }
}