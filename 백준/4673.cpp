#include <iostream>
using namespace std;

int main(){
    bool a[100001] = {false,};
    int k;
    int sum;
    a[0] = true;
    for(int i = 0; i < 10001; i++){
        k = i;
        sum = k;
        while(1){
            if(k < 10){
                sum += k;
                break;
            }
            sum += k % 10;
            k /= 10;            
        }
        a[sum] = true;
    }
    for(int i = 0; i < 10001; i++){
        if(a[i] == false){
            cout << i << "\n";
        }

    }



}

