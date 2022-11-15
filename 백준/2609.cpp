#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int max = a* b;
    if(a <= b){
        int temp = a;
        a = b;
        b = temp;
    }
    int n;
    while(1){
        n = a % b;
        if(n == 0){
            cout << b <<"\n";
            cout << max/b ;
            break;
        }
        a = b;
        b = n;
    }

}