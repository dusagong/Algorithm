#include <iostream>

using namespace std;

int main(){
    int a[7];
    int min = 100;
    int sum = 0;
    for(int i = 0; i < 7; i++){
        cin >> a[i];
        if(a[i]%2 == 1){
            sum += a[i];
            if(a[i] < min)min = a[i];
        }
    }
    if(min == 100)cout << "-1";
    else {
        cout << sum <<"\n";
        cout << min;
    }
}