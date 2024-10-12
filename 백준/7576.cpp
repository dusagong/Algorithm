#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002] = {0,};
int visit[1002][1002];
int dx[4] = {-1, 0 ,1, 0};
int dy[4] = {0, -1, 0, 1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(visit, -1, sizeof(visit)); // 전부 -1로 초기화.
    queue<pair<int,int>> Q;
    int date = 0;
    int m, n;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                Q.push(make_pair(i,j));
                visit[i][j] = 0;
            }
        }
    }
    
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx<0||nx>=m||ny<0||ny>=n) continue;
            if(board[nx][ny] !=0 || visit[nx][ny] != -1) continue;
            visit[nx][ny] = visit[cur.X][cur.Y] + 1;
            Q.push(make_pair(nx,ny));
            if(visit[nx][ny] > date){
                date = visit[nx][ny];
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(visit[i][j] == -1 && board[i][j]!= -1){
                date = -1;
            }
        }
    }
    cout << date;
}