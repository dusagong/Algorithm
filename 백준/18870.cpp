#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int temp;
    int left, right, mid, ck;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        a.push_back(temp);
        b.push_back(temp);
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());


    for(int i = 0; i < b.size(); i++){
        temp = b[i];
        ck = 0;
        left = 0;
        right = a.size() - 1;
        while(left <= right){
            mid = (left + right)/2;
            
            if(temp < a[mid]){
                right = mid - 1;
            }
            else if(temp > a[mid]){
                left = mid + 1;
            }
            else{
                ck = mid; 
                break;
            }
        }
        
        cout << ck <<" ";
    }
}