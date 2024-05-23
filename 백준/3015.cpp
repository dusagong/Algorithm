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
    long long int temp;
    vector<long long int> arr;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    for(int i = n-1; i >= 0; i--){
        while(1){
            if(key.size() == 0){
                int tempsize = tempkey.size();
                for(int j = 0; j < tempsize; j++){
                    key.push(tempkey.top());
                    value.push(tempvalue.top());
                    tempkey.pop();
                    tempvalue.pop();
                }  
                key.push(i+1);
                value.push(arr[i]);
                break;
            }
            else if(value.top()>arr[i]){
                int tempsize = tempkey.size();
                for(int j = 0; j < tempsize; j++){
                    key.push(tempkey.top());
                    value.push(tempvalue.top());
                    tempkey.pop();
                    tempvalue.pop();
                }
                sum++;
                key.push(i+1); 
                value.push(arr[i]);
                break;
            }
            else if(value.top()<arr[i]){
                sum++;
                key.pop();
                value.pop();
                continue;
            }
            else if(value.top() == arr[i]){
                sum++;
                tempkey.push(key.top());
                tempvalue.push(value.top());
                key.pop();
                value.pop();
                continue;

            }

        }

    }
    cout << sum;
}