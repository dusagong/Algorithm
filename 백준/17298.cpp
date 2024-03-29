#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int *a = new int[n];
    int *answer = new int[n];
    stack<int> s;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a[i] = temp;
    }
    for(int i = n - 1; i >= 0; i--){
        while (!s.empty() && s.top() <= a[i]){
			s.pop();
        }
        if (s.empty()) answer[i] = -1;
		else answer[i] = s.top();

        s.push(a[i]);

    }
    for(int i = 0; i < n; i++){
        cout << answer[i] <<" ";
    }

}