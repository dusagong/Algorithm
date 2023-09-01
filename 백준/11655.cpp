#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if((s[i] - 'a' )>= 0 && (s[i] - 'a' ) <26 ){
            s[i] -= 'a';
            s[i] += 13;
            if(s[i] >=26)s[i] -= 26;
            s[i] += 'a';
        }
        else if((s[i] - 'A' )>= 0 && (s[i] - 'A' ) <26 ){
            s[i] -= 'A';
            s[i] += 13;
            if(s[i] >=26)s[i] -= 26;
            s[i] += 'A';
        }
    }
    cout << s;
}