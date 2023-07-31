#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    while(1){
        if(n >= 10){
            n /= 10;
            count ++;
        }
        else break;
    }
    int temp = n + 1;
    for(int i = 0; i < count; i++){
        temp *= 10;
    }
    cout << temp;

}