#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    stack<char> a;
    string s;
    for(int i = 0; i < t; i++){
        
        string s;
        getline(cin, s);
        stringstream ss(s);
        string s1;
        while(ss >> s1){
            for(int i = 0; i < s1.length(); i++){
                a.push(s1[i]);
            }
            for(int i = 0; i < s1.length(); i++){
                cout << a.top();
                a.pop();
            }
            cout << " ";
        }
            cout << "\n";
        
    }
}