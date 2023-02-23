#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a;
    int temp;
    for(int i = 0; i < n; i++){ 
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.rbegin(),a.rend());
    cout << a[k - 1];
}