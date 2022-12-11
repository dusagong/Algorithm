#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    int t;
    cin >> s >> t; //s는 문자열., t는 명령어 횟수
    stack<char> a;
    stack<char> b;
    string command;
    char k;
    for(int i = 0; i < s.length(); i++){
        a.push(s[i]);
    }
    for(int i = 0; i < t; i++){
        cin >> command;
        if(command == "L"){
            if(a.empty())continue;
            b.push(a.top());
            a.pop();
        }
        else if(command == "D"){
            if(b.empty())continue;

            a.push(b.top());
            b.pop();
        }
        else if(command == "B"){
            if(a.empty())continue;

            a.pop();
        }
        else{
            cin >> k;
            a.push(k);
        }
    }
    int temp = a.size();

    for(int i = 0; i < temp; i++){
        b.push(a.top());
            a.pop();
    }
    temp = b.size();
    for(int i = 0; i < temp; i++){
        cout << b.top();
        b.pop();
    }
}