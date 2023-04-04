#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a, b, c;
    queue<int>q;
    int *bas = new int[n];
    for(int i = 0; i < n; i++){
        bas[i] = i + 1;
    }
    for(int i = 0 ; i < m; i++){
        cin >> a >> b >> c;
        for(int j = 0; j < b - a + 1; j++){
            if((j + c) > b){
                q.push(bas[j+ c -b + a - 2]);
            }   
            else q.push(bas[j + c - 1]);
        } 
        for(int j = 0; j < b - a + 1; j++){
            bas[a - 1 + j] = q.front();
            q.pop();
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << bas[i] <<" ";
    }
}