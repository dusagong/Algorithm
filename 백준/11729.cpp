#include <iostream>
#include<algorithm> // utility 헤더파일이 포함됨.
#include<vector> // utility 헤더파일이 포함됨.

using namespace std;


vector<pair<int,int>> mov;
int cnt;
void func (int n, int cur, int tar); // 원판

int main(){
    int n;
    cin >> n;
    cnt = 0;
    func(n,1,3);
    cout << cnt << "\n";
    for(int i = 0; i < mov.size(); i++){
        cout << mov[i].first << " "<<mov[i].second << "\n";
    }
}

void func (int n, int cur, int tar){// 1 2  -> 2 3
    if(n == 1){
        mov.push_back({cur,tar});
        cnt++;
    }
    else{
        func(n-1,cur, 6- cur - tar); // 제 3의 기둥은 6- cur - tar
        cnt++;
        mov.push_back({cur,tar});
        func(n-1, 6- cur - tar,tar); 
    }
    

}


// #include <iostream>
// #include <cmath>
// using namespace std;
// void top2(int from,int to,int n);
// int main(){
//     int n;
//     cin >> n;
//     int count;
//     //count = top1(1,3,n);
//     count = pow(2,n)-1;
//     cout << count <<"\n";
//     top2(1,3,n);
// }
// void top2(int from,int to,int n){
//     int count = 0;
//     if(n>1){
//     int other = 6 - (from + to);
//         top2(from,other,n-1);
//         top2(from,to,1);
//         top2(other,to,n-1);
//     }
//     else{
//         cout << from << " " << to << "\n";
                
//     }
// }
