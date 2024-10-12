#include <iostream>
#include <tuple>
#include <string.h>
#include <queue>
#define X 0
#define Y 1
#define Z 2

using namespace std;

int board[102][102][102] = {0,};
int visit[102][102][102];
int dx[6] ={-1, 0, 1, 0, 0, 0};
int dy[6] = {0, -1, 0, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n, h;
    cin >> n >> m >> h;
    int date = 0;
    queue<tuple<int,int,int>> Q;
    memset(visit, -1, sizeof(visit)); // 전부 -1로 초기화.
    for(int k = 0; k < h; k++){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> board[i][j][k];
                if(board[i][j][k] == 1){
                    visit[i][j][k] = 0;
                    Q.push(make_tuple(i,j,k));
                }
            }
        }
    }
    while(!Q.empty()){
        tuple<int,int,int> tup = Q.front();
        Q.pop();
        for(int i = 0; i < 6; i++){
            int nx = get<X>(tup) + dx[i];
            int ny = get<Y>(tup) + dy[i];
            int nz = get<Z>(tup) + dz[i];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h)continue;
            if(board[nx][ny][nz] != 0 || visit[nx][ny][nz] != -1) continue;
            visit[nx][ny][nz] = visit[get<X>(tup)][get<Y>(tup)][get<Z>(tup)] + 1;
            if(date < visit[nx][ny][nz]){
                date = visit[nx][ny][nz];
            }
            Q.push(make_tuple(nx,ny,nz));
        }
    }
    for(int k = 0; k < h; k++){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(visit[i][j][k] == -1 && board[i][j][k] != -1){
                    date = -1;
                }
            }
        }
    }
    cout << date;
}