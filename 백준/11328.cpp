#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s1, s2;
    for(int j = 0; j < n; j++){
        cin >> s1 >> s2;
        vector<char> a1;
        vector<char> a2;
        for(int i = 0; i < s1.length(); i++){
            a1.push_back(s1[i]);
        }
        for(int i = 0; i < s2.length(); i++){
            a2.push_back(s2[i]);
        }
        sort(a1.rbegin(),a1.rend());
        sort(a2.rbegin(),a2.rend());
        int swich = 0;
        for(int i = 0; i < a1.size(); i++){
            if(a1[i] != a2[i]){
                cout << "Impossible\n";
                swich = 1;
                break;
            }
        }
        if(swich == 1)continue;
        else cout << "Possible\n";

    }
}