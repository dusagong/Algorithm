#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int main(){
    int k, n;
    cin >> n >> k;
    queue<int> q;
    vector<int> v;

    for(int i = 0; i < n; i++){
        q.push(i+1);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k-1; j++){
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    cout << "<";
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i] <<", ";
    }
    cout << v[v.size()-1] << ">";
}