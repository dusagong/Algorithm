#include <iostream>
#include <vector>
#include <string>
using namespace std;
// int fora(int i,int p, int s, int c,string l,string as[]);
vector <char> as;
vector <char> result;
vector <string> resultcom;

int p;
int s;
bool *visit = new bool[s];
int ans;
int A,C,G,T;
int a,c,g,t;
// vector <string> compare;

void dfs();
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    resultcom.push_back("0");
    ans = 0;
    cin >> s >> p;
    string temp;
    cin >> temp;
    for(int i = 0; i < s; i++){
        as.push_back(temp[i]);
    }    
    // for(int i = 0; i < s; i++)visit[i]=false;
    cin >> a >> c >> g >> t;
    dfs();
    cout << ans;
        

}

void dfs(){
    if (result.size() == p) {
        A=0;C=0;G=0;T=0;
        for(int i = 0; i < p; i++){
            if(result[i]=='A')A++;
            else if(result[i]=='C')C++;
            else if(result[i]=='G')G++;
            else T++;
        }
        if(a>A || c>C|| g>G|| t>T)return;

        
        string str(result.begin(),result.end());
        
        for(int i = 1; i < resultcom.size(); i++){
            if(resultcom[i] == str)return;
        }
        resultcom.push_back(str);
        ans++;
        return;
    }
    for (int i = 0; i < s; i++) {
        if (!visit[i]) {
            visit[i] = true;
            result.push_back(as[i]);
            dfs();
            result.pop_back();
            visit[i] = false;
        }
    }


}
