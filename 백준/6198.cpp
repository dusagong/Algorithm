#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<long long int> s;
    long long int total = 0;
    for(int i = 0; i < n; i++){
        long long int temp;
        cin >> temp;
        while(!s.empty() && s.top() <= temp){
            s.pop();
        }
        total += s.size();

        s.push(temp);
    }
    cout << total;
}