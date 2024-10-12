#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a, b ,c;
    cin >> a >> b >> c;
    cout <<a + b - c<< "\n";
    string a1,b1,c1;
    a1 = to_string(a) ;
    b1 = to_string(b);
    c1 = to_string(c);
    string left = a1 + b1;
    cout << stoi(left) - stoi(c1);
}