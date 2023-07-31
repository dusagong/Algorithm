#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    int count = 0;
    vector<int> a;
    for(int i = 1; i*i <= n; i++ ){
        if(i*i>=m ){
            count++;
            a.push_back(i*i);
        }
    }

    if(count == 0){
        cout << "-1";
    }
    else{
        int sum= 0;
        for(int i = 0; i < a.size(); i++){
            sum += a[i];
        }
        cout << sum << "\n";
        cout << a[0];

    }

    
}