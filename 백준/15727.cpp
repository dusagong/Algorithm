#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    // int max_r;
    // for(int i = 1; i <= 5; i++){
    //     if(t % i == 0)max_r = i;
    // }
    // cout << t / max_r;
    if(t % 5 == 0) cout << t/5;
    else 
    cout << t/5 + 1;
}