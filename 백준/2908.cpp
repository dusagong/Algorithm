#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a;
    cin >> b; 

    int a1,a2;
    a1 = a % 10;
    a2 = a / 10;
    a1 = 10 * a1 + a2 % 10;
    a2 = a2 / 10;
    a1 = 10 * a1 + a2 % 10;

    int b1,b2;
    b1 = b % 10;
    b2 = b / 10;
    b1 = 10 * b1 + b2 % 10;
    b2 = b2 / 10;
    b1 = 10 * b1 + b2 % 10;      

    if(a1 > b1){
        cout << a1;
    }
    else cout << b1;

}