#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, c = 0;
    a = n / 300;
    b = (n%300) / 60;
    c = ((n%300)%60)/10;

    if(((n%300)%60)% 10 != 0)cout << "-1";
    else cout << a <<" "<< b <<" "<< c ;

}