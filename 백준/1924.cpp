#include <iostream>
using namespace std;

int main(){
    int m, d;
    cin >> m >> d;
    int mont[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    for(int i = 1; i < m; i++ ){
        sum += mont[i];
    }
    sum += d;
    sum %= 7;
    if(sum == 1){
        cout << "MON";
    }
    if(sum == 2){
        cout << "TUE";
        
    }
    if(sum == 3){
        
        cout << "WED";
    }
    if(sum == 4){
        
        cout << "THU";
    }
    if(sum == 5){
        cout << "FRI";
        
    }
    if(sum == 6){
        cout << "SAT";
        
    }
    if(sum == 0){
        cout << "SUN";
        
    }
}