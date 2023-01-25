#include <iostream>
using namespace std;
#define PI 3.1415926535897932
int main(){
    int n;
    cin >> n;
    double s1;
    double s2;
    s1 = n * n *  (PI);
    cout << fixed;
    cout.precision(6);
    cout << s1 << "\n";

    s2 = n * n * 2;
    cout << fixed;
    cout.precision(6);
    cout << s2 << "\n";
}