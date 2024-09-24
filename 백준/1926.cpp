#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[500][500] = {0,};
int vis[500][500] = {0,};
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int numbers = 0;
int maxArea = 0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int> > Q;
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j ++){
            cin >> board[i][j]; 
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j ++){
            if(vis[i][j] != 1 && board[i][j] == 1) {
                numbers++;
                vis[i][j] = 1;
                Q.push(make_pair(i,j));
                int temp = 1;
                while(!Q.empty()){
                    pair<int,int>cur = Q.front();
                    Q.pop();
                    for(int dir = 0; dir < 4; dir ++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx<0 || nx>=m||ny<0||ny>=n)continue;
                        if(vis[nx][ny] || board[nx][ny] != 1)continue;
                        vis[nx][ny] = 1;
                        Q.push(make_pair(nx,ny));
                        temp++;
                    }
                }
                if(maxArea < temp){
                    maxArea = temp;
                }
            }
        }
    }
    cout << numbers << "\n";
    cout << maxArea << "\n";
}
