#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

#define X first
#define Y second

int visit[100001] = {0,};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(visit, -1, sizeof(visit)); // 전부 -1로 초기화.
    int a, b;
    cin >> a >> b;
    queue<int> q;
    visit[a] = 0;
    q.push(a);
    while(!q.empty()){
        int temp = q.front();
        if(temp == b){
            cout << visit[temp];
            break;
        }
        q.pop();
        int temp1 = temp -1;
        int temp2 = temp +1;
        int temp3 = temp *2;
        int temps[3] = {temp1, temp2, temp3};
        for(int i = 0; i < 3; i++){
            if(temps[i] < 0 || temps[i] > 100000) continue;
            if(visit[temps[i]] > -1) continue;
            visit[temps[i]] = visit[temp] + 1;
            q.push(temps[i]);
        }
    }

}