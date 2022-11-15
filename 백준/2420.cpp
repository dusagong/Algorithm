#include <iostream>
using namespace std;

int main(){
    long long m, n;
    cin >> m >> n;
    long long t = m - n;
    if(t < 0)t *= -1;
    cout << t;
}