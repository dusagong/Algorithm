#include <bits/stdc++.h>
using namespace std;
const int N=1005;
int n,x,y,dx[N],dy[N],cnt[N*N];
int main(){
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)
        cin>>dx[i]>>dy[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int nx=x-dx[i]+dx[j],ny=y-dy[i]+dy[j];
            if(nx==0&&ny==0) cnt[j-i+1]++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<cnt[i]<<endl;
    return 0;
}