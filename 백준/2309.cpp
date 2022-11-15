#include <iostream>
#include <algorithm>
using namespace std;
    
int main(){
    int a[9];
    int sum;
    int t1,t2;

    int check = 0;
    for(int i = 0; i < 9; i++){
        cin >> a[i];
    }
    sort(a,a+9);
    for(int i = 0; i < 9; i++){
        if(check == 1)break;
        for(int j = 0; j < 9; j++){
            if(j == i) continue;
            sum = 0;
            for(int k = 0; k < 9; k++){
                if(k == i || k == j)continue;
                sum += a[k];
            }
            if(sum == 100){
                t1 = i;
                t2 = j;
                check = 1;
                break;
            }
        }
    }
    for(int i = 0; i< 9; i++){
        if(i == t1|| i ==t2)continue;
        cout << a[i] <<"\n"; 
    }
}
