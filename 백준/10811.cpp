#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int *a = new int[n];
    int k, j;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }   
    int temp;
    for(int i = 0; i < m; i++){
        temp = 0;
        cin >> j >> k;
        
        for(int l = j - 1; l < k; l++){
            v.push_back({l,a[l]});       
            
        }
        sort(v.rbegin(),v.rend());
        for(int l = j - 1; l < k; l++){
            a[l]= v[temp].second;    
            temp++;
        }
    
        v.clear();
    }
    for(int i = 0; i < n; i++){
        cout << a[i]<< " ";
    }     
}