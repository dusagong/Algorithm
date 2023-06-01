#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int d;
    cin >> d;

    int cr, br;
    c += d;
    cr = c % 60;
    b += c/60;
    br = b % 60;
    a += b/60;
    cout << a%24 << " " << br << " " << cr;


}