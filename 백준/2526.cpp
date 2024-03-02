#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    int l;
    vector<int> a;
    vector<int> b;
    l = n;
    if (n <= p){
        a.push_back(l);
        b.push_back(l);
    }
    bool zeroCheck = false;
    while (1){

        l = (l * n) % p;
        if(l == 0){
            zeroCheck = true;
            break;
        }
        a.push_back(l);
        b.push_back(l);
        sort(b.begin(), b.end());
        b.erase(unique(b.begin(), b.end()), b.end());
        if (a.size() != b.size())
            break;
    }
    if(zeroCheck)
    cout << 1;
    else
    cout << b.size();
}
//if remain is 0? 