#include <iostream>

using namespace std;

int main(){
    int n, f;
    cin >> n >> f;
    n = n/100;
    n *= 100;
    while(1){
        if(n % f == 0){
            if(n%100 <10){
                cout << "0" << n%100;
            }
            else cout << n%100;
            return 0;
        }
        else n += 1;
    }

}