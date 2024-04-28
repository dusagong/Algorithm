#include <bits/stdc++.h>

using namespace std;
const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;
int cursor = 0;
void insert(int addr, char num){
  
  dat[unused] = num;
  pre[unused] = addr;
  nxt[unused] = nxt[addr]; 
  if(nxt[addr] != -1)pre[nxt[addr]] = unused;
  nxt[addr] = unused;

  cursor = nxt[addr];
  unused++;
}

void erase(int addr){
  nxt[pre[addr]] = nxt[addr];
  if(nxt[addr] != -1)pre[nxt[addr]] = pre[addr];
  cursor = pre[addr];
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
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    dat[0] = '\0';
    string s;
    cin >> s;
    for(int i = 0; i< s.length(); i++){
        // dat[unused] = s[i];
        // nxt[unused] = -1;
        // pre[unused] = unused - 1;
        // nxt[unused -1] = unused;
        // unused++;
        dat[unused] = s[i];
        nxt[unused] = -1;
        pre[unused] = unused - 1;
        nxt[unused - 1] = unused;
        unused++;
        cursor++;
    }
    int n;
    cin >> n;
    char c;
    char d;
    for(int i = 0; i < n; i++){
      cin >> c;
      if(c == 'L'){
        if(pre[cursor] != -1)cursor = pre[cursor];
      }
      else if(c == 'D'){
        if(nxt[cursor] != -1) cursor = nxt[cursor];

      }
      else if(c == 'B'){
        if(pre[cursor] != -1) {
          erase(cursor);
        }

      }
      else{
        cin >> d;
        insert(cursor,d);
      }
    }

    traverse();
}



