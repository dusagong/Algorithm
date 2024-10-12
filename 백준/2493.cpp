#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long int temp;
    stack<pair<int, long long int>> s;
    s.push(make_pair(0,100000001));
    stack<int> last;
    for(int i = 1; i <= n; i++){
        cin >> temp;
        while(s.top().Y < temp){
            s.pop();
        }
        cout << s.top().X << " ";
        s.push(make_pair(i,temp));
    }
}