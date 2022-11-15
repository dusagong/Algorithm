#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    int c;
    for(int i = 0; i < n; i ++){
        cin >> c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());

    for(int i = 0; i < n; i ++){
        cout << a[i] << "\n";
    }
}