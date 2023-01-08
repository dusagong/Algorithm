#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> sum;
    queue<int> q;
    int temp;
    int arrsum = 0;
    int max;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0; i < n; i ++){
        arrsum += a[i];
        q.push(a[i]);
        if(q.size() == k){
            sum.push_back(arrsum);
            arrsum -= q.front();
            q.pop();
        }
        
    }
    sort(sum.rbegin(), sum.rend());


    cout << sum[0];
}