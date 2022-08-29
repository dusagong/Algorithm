#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int money = 0;
    int most = 0;
    if(a == b && b == c){
        money += 10000 + a*1000;
    }
    else if(a == b || b == c || c == a){
        if(a == b){
           money += 1000 + a*100; 
        }
        else if(b == c){
           money += 1000 + b*100; 
        }
       else{
           money += 1000 + c*100; 
        }
        
    }
    else{
        if(a > most)most = a;
        if(b > most)most = b;
        if(c > most)most = c;
        money += most*100;
    }
    cout << money;
}