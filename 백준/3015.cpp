#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    stack<int>key;
    stack<long long int>value;
    stack<int>tempkey;
    stack<long long int>tempvalue;
    key.push(n+1);
    value.push(1000000001);
    long long int temp;
    vector<long long int> arr;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    for(int i = n-1; i >= 0; i--){
        while(1){
            if(value.top() > arr[i]){
                long long int dist;
                if(key.top() == n+1){
                    if(tempkey.size() == 0){
                        dist = key.top() - (i+1) -1;
                    }
                    else{
                        dist = tempkey.top() - (i+1);
                    
                    }
                }
                else{
                    dist = key.top() - (i+1);
                }
                sum += dist;
                key.push(i+1);
                value.push(arr[i]);
                break;
            }
            else{
                if(tempkey.size() != 0){
                    if(tempvalue.top()  < value.top()){
                        tempkey.push(key.top());
                        tempvalue.push(value.top());
                        key.pop();
                        value.pop();
                    }
                    else{
                        key.pop();
                        value.pop();
                    }
                }
                else{
                    tempkey.push(key.top());
                    tempvalue.push(value.top());
                    key.pop();
                    value.pop();
                }
                
            }
        }

    }
    cout << sum;
}