#include <iostream>
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
  cout << "\n";
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        unused = 1;
        cursor = 0;
        fill(pre, pre+MX, -1);
        fill(nxt, nxt+MX, -1);
        fill(dat,dat+MX,'\0');
        dat[0] = '\0';
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '<'){
                if(pre[cursor] != -1)cursor = pre[cursor];
            }
            else if(s[j] == '>'){
                if(nxt[cursor] != -1) cursor = nxt[cursor];

            }
            else if(s[j] == '-'){
                if(pre[cursor] != -1) {
                erase(cursor);
                }

            }
            else{
                insert(cursor,s[j]);
            }
        }
        traverse();

    }
}