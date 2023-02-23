#include <iostream>
#include <vector>
#include <stack>
using namespace std;
    int range[1000001] = {0,};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int* a = new int[n];
    int* answer = new int[n];
    stack<int> s;
    stack<int> t;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a[i] = temp;
        range[temp]++;
    }
    

    for(int i = n - 1; i >= 0; i--){
        while (!s.empty() && s.top() <= range[a[i]]){
			s.pop();
            t.pop();
        }
        if (s.empty()) answer[i] = -1;
		else answer[i] = t.top();

        s.push(range[a[i]]);
        t.push(a[i]);

    }
    for(int i = 0; i < n; i++){
        cout << answer[i] <<" ";
    }

}