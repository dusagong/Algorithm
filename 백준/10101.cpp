#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if(a + b + c != 180){
        cout << "Error";
        return 0;
    }
    if(a == b ||a ==c || b == c){
        if(a == 60 && b == 60){
            cout << "Equilateral";
        }
        else
        cout << "Isosceles";
        return 0;
    }
    else cout << "Scalene";
}