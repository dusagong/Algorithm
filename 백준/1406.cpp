#include <bits/stdc++.h>

using namespace std;
const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;
int cursor = 1;
void insert(int addr, char num){
  dat[unused] = num;
  pre[unused] = addr;
  nxt[unused] = nxt[addr]; 
  nxt[addr] = unused;
  if(nxt[addr] != -1)pre[nxt[addr]] = unused;
  unused++;
  cursor++;
}

void erase(int addr){
  nxt[pre[addr]] = nxt[addr];
  if(nxt[addr] != -1)pre[nxt[addr]] = pre[addr];
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

int main(){
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    dat[0] = '\0';
    string s;
    cin >> s;
    for(int i = 0; i< s.length(); i++){
        dat[unused] = s[i];
        nxt[unused] = -1;
        pre[unused] = unused - 1;
        nxt[unused -1] = unused;
        unused++;
    }
    #include <iostream>
    using namespace std;

    // int n;
    // cin >> n;
    // string temp;
    // char c;
    // for(int i = 0; i < n; i++){
    //     cin >> temp;
    //     if(temp == "P"){
    //         cin >> c;
    //         unused--;
    //         insert(unused,c);
    //     }
    //     if(temp == "L"){
    //         unused--;
    //     }
    //     if(temp == "B"){
    //         unused--;
    //         erase(unused);
    //     }
    //     if(temp == "D"){
    //         if(nxt[unused] != -1)unused++;
    //     }
    // }
    traverse();
}







// #include <iostream>
// #include <stack>

// using namespace std;

// int main(){
//     string s;
//     int t;
//     cin >> s >> t; //s는 문자열., t는 명령어 횟수
//     stack<char> a;
//     stack<char> b;
//     string command;
//     char k;
//     for(int i = 0; i < s.length(); i++){
//         a.push(s[i]);
//     }
//     for(int i = 0; i < t; i++){
//         cin >> command;
//         if(command == "L"){
//             if(a.empty())continue;
//             b.push(a.top());
//             a.pop();
//         }
//         else if(command == "D"){
//             if(b.empty())continue;

//             a.push(b.top());
//             b.pop();
//         }
//         else if(command == "B"){
//             if(a.empty())continue;

//             a.pop();
//         }
//         else{
//             cin >> k;
//             a.push(k);
//         }
//     }
//     int temp = a.size();

//     for(int i = 0; i < temp; i++){
//         b.push(a.top());
//             a.pop();
//     }
//     temp = b.size();
//     for(int i = 0; i < temp; i++){
//         cout << b.top();
//         b.pop();
//     }
// }
