#include <iostream>

using namespace std;
float fx(float x, int a, int b);
int main(){
    int n;
    int a, b;
    cin >> n;
    cin >> a >> b;
    float sum = 0;
    float lh;
    float rh;
    float lx;
    float rx;
    for(int i = 1; i <= n; i++){
        lx = a + ((float)(b-a)/n) * (i - 1);
        rx = a + ((float)(b-a)/n) * i;
        lh = fx(lx, a, b);
        rh = fx(rx, a, b);
        sum += (lh + rh) * ((float)(b-a)/n / 2);
    }
    cout << sum;

    


}   
float fx(float x, int a, int b){
    float func = (-1) * (x-a)*(x-b);
    return func;
}