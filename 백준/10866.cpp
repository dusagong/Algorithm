#include <iostream>
#include <deque>

using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    int k;
    deque<int> q;
    for(int i = 0; i < t; i++){
        cin >> s;
        if(s == "push_front"){
            cin >> k;
            q.push_front(k);
        }
        else if(s == "push_back"){
            cin >> k;
            q.push_back(k);
        }
        else if(s == "pop_front"){
            if(q.size() == 0){
                cout << "-1\n";
            }
            else{
                cout <<q.front() <<"\n";
                q.pop_front();
                
            }
        }
        else if(s == "pop_back"){
            if(q.size() == 0){
                cout << "-1\n";
            }
            else{
                cout <<q.back() <<"\n";
                q.pop_back();
            }
        }
        else if(s == "size"){
            cout << q.size() <<"\n";
        }
        else if(s == "empty"){
            if(q.empty()){
                cout << "1\n";
            }
            else cout << "0\n";

        }
        else if(s == "front"){
            if(q.empty()){
                cout << "-1\n";
            }
            else cout << q.front() <<"\n";
        }
        else {//back
            if(q.empty()){
                cout << "-1\n";
            }
            else cout << q.back() <<"\n";

        }
    }
}
