#include <bits/stdc++.h>

#define X first
#define Y second
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<pair<long long int, int>> s;
    long long int total = 0;
    for(int i = 0; i < n; i++){
        long long int temp;
        cin >> temp;
        int depth = 0;
        while(!s.empty() && temp >= s.top().X){
            total += s.top().Y;
            if(temp == s.top().X){
                depth = s.top().Y;
            }
            s.pop();
        }
        if(!s.empty()){
            total ++;
        }
        s.push(make_pair(temp,1 + depth));
    }
    cout << total;
}