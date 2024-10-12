#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
#define X first
#define Y second

string board[1002][1002];
int fire[1002][1002] = {0,};
int visit[1002][1002] = {0,};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(visit, -1, sizeof(visit)); // 전부 -1로 초기화.
    queue<pair<int,int>> Q;
    int escape = 0;
    int m, n;
    cin >> m >> n;
    pair<int,int> initJ;
    for(int i = 0; i < m; i++){
        string temp;
        cin >> temp;
        for(int j = 0; j < n; j++){
            board[i][j] = temp[j];
            if(board[i][j] == "F"){
                Q.push(make_pair(i,j));
                fire[i][j] = 1;
            }
            if(board[i][j] == "J"){
                initJ = make_pair(i,j);
                
            }
        }
    }
    Q.push(initJ);
    visit[initJ.X][initJ.Y] = 0;

    while(!Q.empty()){
        pair<int,int>cur = Q.front();
        Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if(visit[cur.X][cur.Y] != -1){
                if(nx<0 || nx>=m || ny<0 || ny>=n){
                    if(escape != 0){
                        if(escape > visit[cur.X][cur.Y] + 1){
                            escape = visit[cur.X][cur.Y] + 1;
                        }
                    }
                    else{
                        escape = visit[cur.X][cur.Y] + 1;
                    }
                };
                if(visit[nx][ny] != -1 || board[nx][ny] =="#" || fire[nx][ny] == 1) continue;
                visit[nx][ny] = visit[cur.X][cur.Y] + 1;
                Q.push(make_pair(nx,ny));
                
            } 
            else{
                if(nx<0 || nx>=m || ny<0 || ny>=n)continue;
                if(board[nx][ny] =="#" || fire[nx][ny] == 1)continue;
                fire[nx][ny] = 1;
                Q.push(make_pair(nx,ny));
            }
        }
    }
    if(escape == 0){
        cout << "IMPOSSIBLE";
    }
    else{
        cout << escape;
    }

}