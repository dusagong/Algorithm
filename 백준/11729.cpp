#include <iostream>
#include <cmath>
using namespace std;
void top2(int from,int to,int n);
int main(){
    int n;
    cin >> n;
    int count;
    //count = top1(1,3,n);
    count = pow(2,n)-1;
    cout << count <<"\n";
    top2(1,3,n);
}
void top2(int from,int to,int n){
    int count = 0;
    if(n>1){
    int other = 6 - (from + to);
        top2(from,other,n-1);
        top2(from,to,1);
        top2(other,to,n-1);
    }
    else{
        cout << from << " " << to << "\n";
                
    }
}
