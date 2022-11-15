#include <iostream>
using namespace std;
int main(){
    int a[5];
    int sum = 0;
    for(int i = 0; i < 5; i ++){
        cin >> a[i];
        if(a[i] < 40)a[i] = 40;

    }
    for(int i = 0; i < 5; i ++){
        sum += a[i];
    }
    sum /=5;
    cout << sum;
}