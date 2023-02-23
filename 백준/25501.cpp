#include <iostream>
#include <vector>
#include <string>
using namespace std;

int recursion(const string s, int l, int r, vector v){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1,v);
}

int isPalindrome(const string s, vector v){
    return recursion(s, 0, strlen(s)-1, v);
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    string a;
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << isPalindrome(a, v) << " " << <<"\n";

    }
}