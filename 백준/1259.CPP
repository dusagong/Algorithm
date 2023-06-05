#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    while(1){
        string temp;
        cin >> temp;
        stack<char> a;
        queue<char> b;
        if (temp == "0")break;
        for(int i = 0; i < temp.length(); i++){
            a.push(temp[i]);
            b.push(temp[i]);
        }
        int size = a.size();
        bool result = false;
        for(int i = 0; i < size; i++){
            if(a.top() != b.front()){
                result = true;
                break;
            }
            a.pop();
            b.pop();
        }
            if(result == true)cout << "no\n";
            else cout << "yes\n";
    }

}