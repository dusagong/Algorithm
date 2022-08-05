#include <iostream>
using namespace std;

int main(){
    int a,b,v;
    cin >> a >> b >> v;
    int k;
    k = (v-a) / (a-b) + 1;
    if((v-a) % (a-b) == 0){
        cout << k;
    }
    else{
        cout << k + 1 ;
    }



}