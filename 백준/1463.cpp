#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(1){
        if(n%3 == 0){
            n /=3;
            count++;
        }
        else if(n%3 == 1 && n!=1){
            n--;
            n/=3;
            count +=2;
        }
        else if(n%2 == 0){
            n /=2;
            count++;
        }
        else if(n == 1){
            cout << count;
            break;
        }
        else {
            n --;
            count++;
        }
        if(n == 1){
            cout << count;
            break;
        }
    }   
}