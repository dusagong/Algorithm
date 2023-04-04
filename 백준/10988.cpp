#include <iostream>
#include <deque>
using namespace std;

int main(){
    string s;
    cin >> s;

    deque<char> d;

    for(int i = 0; i < s.length(); i++){
        d.push_front(s[i]);
    }
    char a, b;
    while(d.empty() == false){
        if(d.size() == 1){
            cout << "1";	
            break;
        }
	    a = d.front();
        b = d.back();
        d.pop_front();
        d.pop_back();
        
	    if(a != b){
            cout << "0";
            break;
        }
        if(d.size() == 0){
            cout << "1";	
            break;
        }
    }
}
