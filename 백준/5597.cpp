#include <iostream>
using namespace std;

int main(){
    int a[31]={0,};
    int n;
    for(int i = 0; i <=30; i++){
        cin >> n;
        a[n] = 1;
    }
    for(int i = 1; i <=30; i++){

        if(a[i] == 0)cout << i <<"\n";
    }

}