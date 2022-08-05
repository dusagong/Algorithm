#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    bool*s = new bool[n + 1];
    for(int i = 2; i <= n; i++){
        s[i] = true;
    }
    for(int i = 2; i * i <= n; i++){
        if(s[i]){
            for(int j = i * i ; j <= n ; j += i){
                s[j] = false;
            }
        }
    } 
    for(int i = m; i <= n; i++){
        if(i == 1)continue;
        if(s[i]){
            cout << i << "\n";
        }
    }

}

