
#include <iostream>
#include <queue>
#include <string>
#define X first
#define Y second
using namespace std;
int board[100][100] = {0,};
int visit[100][100] = {0,};
int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int> > Q;

    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i ++){
        string temp;
        cin >> temp;
        for(int j = 0; j < n; j++){
            board[i][j] = temp[j] - '0';
        }        
    }

    visit[0][0] = 1;
    Q.push(make_pair(0,0));
    while (!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 4; dir ++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx<0 || nx>=m||ny<0||ny>=n)continue;
            if(visit[nx][ny]!= 0 || board[nx][ny] != 1)continue;
            visit[nx][ny] = visit[cur.X][cur.Y]+1;
            // cout <<nx <<" "<<ny <<" "<< visit[nx][ny] <<"\n";
            Q.push(make_pair(nx,ny));
        }
    }

    cout << visit[m-1][n-1];
}