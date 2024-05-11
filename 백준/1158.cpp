//이건 linkedlist로 풀 문제.
#include <bits/stdc++.h>
using namespace std;
const int MX = 1000005;
int dat[MX];
int pre[MX], nxt[MX];
int unused = 1;
int cursor = 0;
void insert(int addr, int num){
  
  dat[unused] = num;
  pre[unused] = addr;
  nxt[unused] = nxt[addr]; 
  if(nxt[addr] != -1)pre[nxt[addr]] = unused;
  nxt[addr] = unused;

  cursor = nxt[addr];
  unused++;
}

void erase(int addr, int k){
    for(int i = 0; i < k-1; i++){
        addr = nxt[addr];
    }
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1)pre[nxt[addr]] = pre[addr];
    cout << dat[addr];
    cursor = pre[addr];
    cursor = nxt[cursor];
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur];
    cur = nxt[cur];
  }
  // cout << "\n\n";
}

int main(){
    ios::sync_with_stdio(0);  
    cin.tie(0);
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    dat[0] = -1;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        insert(cursor, i+1);
    }
    pre[1]=cursor;
    nxt[cursor] = 1;
    cursor = 1;
    cout << "<";
    for(int i = 0; i < n; i++){
        erase(cursor,k);
        if(i == n -1)break;
        cout <<", ";
    }
    cout << ">";
    // traverse();

}



//이건 스택으로 푼 문제.
// #include <iostream>
// #include <vector>
// #include <queue>


// using namespace std;

// int main(){
//     int k, n;
//     cin >> n >> k;
//     queue<int> q;
//     vector<int> v;

//     for(int i = 0; i < n; i++){
//         q.push(i+1);
//     }

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < k-1; j++){
//             q.push(q.front());
//             q.pop();
//         }
//         v.push_back(q.front());
//         q.pop();
//     }
//     cout << "<";
//     for(int i = 0; i < v.size() - 1; i++){
//         cout << v[i] <<", ";
//     }
//     cout << v[v.size()-1] << ">";
// }