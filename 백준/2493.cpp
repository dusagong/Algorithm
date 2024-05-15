#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int temp;
    stack<int> a;
    stack<int> b;
    a.push(0);
    b.push(0);
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(a.top() < temp){
            while(1){
                if(a.top() == 0 || a.top() > temp){
                    cout << b.top() << " ";
                    break;
                }
                a.pop();
                b.pop();
            }
            a.push(temp);
            b.push(i+1);
        }
        else{
            cout << b.top() << " ";
            a.push(temp);
            b.push(i+1);
        }
        
    }
}