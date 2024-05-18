#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int>key;
    stack<int>value;
    key.push(n+1);
    value.push(1000000001);
    int temp;
    vector<int> arr;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    for(int i = n-1; i >= 0; i--){
        while(1){
            if(value.top() >= arr[i]){
                long long int dist = key.top() - (i+1) -1;
                sum += dist;
                key.push(i+1);
                value.push(arr[i]);
                break;
            }
            else{
                key.pop();
                value.pop();
            }
        }

    }
    cout << sum;
}