#include <iostream>
using namespace std;
void a(int m, int n);
int main(){
    int m,n,sum;
    cin >> m >> n;
    a(m,n);

}

void a(int m, int n){
    bool*s = new bool[n + 1];
    int sum = 0;
    int k = 0;
    
    
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
        if(k == 0 && s[i]){
            k = i;
        }
        if(s[i]){
            sum += i;
        }
    }
    if(sum == 0){
        cout << "-1";
    }
    else{
        cout << sum << endl;
        cout << k;
    }
}
