#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main(){

    stack<char> a;
    string s;
    int swt = 0;

    for(int i = 0; i < s.length(); i++){
        if(s1[i] == '<'){
            cout << "<";
            swt = 1;
            
        }
        if(s1[i] == '>'){
                
            swt = 0;
        }
        if(swt == 1 || s1[i] =='>'){
            cout << s1[i];
        }
    }
    getline(cin, s);
    stringstream ss(s);
    string s1;
    int temp;

    while(ss >> s1){
        for(int i = 0; i < s1.length(); i++){
            temp = a.size();
            if(s1[i] == '<'){
                for(int i = 0; i < temp; i++){
                    cout << a.top();
                    a.pop();
                }
                swt = 1;

            }
            if(s1[i] == '>'){
                
                swt = 0;
            }
            if(swt == 1 || s1[i] =='>'){
                cout << s1[i];
            }
            else {
                a.push(s1[i]);
            }
        }
        temp = a.size();
        for(int i = 0; i < temp; i++){
            cout << a.top();
            a.pop();
        }
        cout << " ";
    }
        cout << "\n";
    
    
}