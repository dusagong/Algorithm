#include <iostream>
#include <vector>
using namespace std;
void s(int m, int n);
int main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0)break;
        s(n,2*n);
    }
}
void s(int m, int n){
    int k = 0;
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
    for(int i = m+1; i <= n; i++){
        if(i == 1)continue;
        if(s[i]){
            k++;
        }
    }
    cout << k << endl;
}
