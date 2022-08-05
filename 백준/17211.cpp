#include <iostream>
using namespace std;

int good(float q,float q1 , float w,float w1,int n){
    int c;
    n--;
    c = q*q1 +w*w1;
    return good(c,q1,1-c,w1,n);
}

int main(){
    int n;
    cin >> n;
    int f;
    cin >> f;
    int g,b;
    int g1,g2;
    int b1,b2;
    cin >> g1 >> g2 >> b1 >> b2;

    good(g,g1,b,b1,n);
    

}