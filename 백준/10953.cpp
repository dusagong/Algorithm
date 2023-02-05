#include <iostream>

using namespace std;

int main(){
    string s;
    int t;
    cin >> t;
    int a, b;
    for(int i = 0; i < t; i++){
        cin >> s;
        a = s[0] - '0';
        b = s[2] - '0';
        cout << a + b << "\n";

    }



}