#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b) {
    if (a.first == b.first)return a.second < b.second;
    return a.first > b.first;
}

int main(){
    int l = 0;
    int o = 0;
    int v = 0;
    int e = 0;
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'L')l++;
        if(s[i] == 'O')o++;
        if(s[i] == 'V')v++;
        if(s[i] == 'E')e++;
    }

    int n;
    cin >> n;
    vector<pair<int,string> > a;
    string b;
    for(int i = 0; i < n; i++){
        int l0 = 0;
        int o0 = 0;
        int v0 = 0;
        int e0 = 0;
        int l1 = 0;
        int o1 = 0;
        int v1 = 0;
        int e1 = 0;
        int temp = 0;
        cin >> b;
        for(int i = 0; i < b.length(); i++){
            if(b[i] == 'L')l0++;
            if(b[i] == 'O')o0++;
            if(b[i] == 'V')v0++;
            if(b[i] == 'E')e0++;
        }
        l1 = l + l0;
        o1 = o + o0;
        v1 = v + v0;
        e1 = e + e0;
        temp = (l1 + o1)*(l1 + v1)*(l1 + e1)*(o1+v1)*(o1+e1)*(v1+e1);
        temp %= 100;
        a.push_back(make_pair(temp,b));
    }
    sort(a.begin(), a.end(), comp);
    cout << a[0].second;

}