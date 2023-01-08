#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    int max;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    
    sort(a.begin(),a.end());
    if(a[0] < 0){
        max = a[0] * a[1];
        b.push_back(max);
        sort(a.rbegin(),a.rend());

        max *= a[0];
        b.push_back(max);
    }
    
    sort(a.rbegin(),a.rend());
    max = a[0] * a[1];
    b.push_back(max);
    max = a[0] * a[1] * a[2];
    b.push_back(max);
    
    
    
    

    
    sort(b.rbegin(),b.rend());
    cout << b[0];

}