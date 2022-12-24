#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;

int main(){

    stack<char> a;
    stack<char> b;
    string s;
    int swt = 0;
    int num = 0;
    vector<vector<char>> tag;
    vector<char> letter;    
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '<'){
            letter.push_back('<');
            swt = 1;
        }
        else if(swt == 1){
            letter.push_back(s[i]);
            if(s[i] == '>'){
                swt = 0;
                tag.push_back(letter);
                letter.clear();

            }
        }
        else continue; 
    }
    stringstream ss(s);
    string s1;
    int temp;

    while(ss >> s1){
        for(int i = 0; i < s1.length(); i++){
            temp = a.size();
            if(s1[i] == '<'){
                if(a.size() != 0){
                    temp = a.size();
                    for(int i = 0; i < temp; i++){
                        cout << a.top();
                        a.pop();
                    }
                }
                swt = 1;
                for(int j = 0; j < tag[num].size(); j++){
                    cout << tag[num][j];
                }
                num++;

            }
            
            else if(swt == 1){
                if(s1[i] == '>'){
                
                    swt = 0;
                }
                else 
                continue;
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
        if(swt == 0){
            cout << " ";

        }
    }
        cout << "\n";
    
    
}