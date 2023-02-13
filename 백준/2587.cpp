#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    vector<int> a;
    int temp;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        a.push_back(temp);
    }
    int sum = accumulate(a.begin(),a.end(),0.0);
    sort(a.begin(),a.end());
    cout << sum / 5 << "\n";
    cout << a[2];
    
}