#include <iostream>
using namespace std;

int main(){
    int x;
    int n;
    cin >> x;
    cin >> n;
    int a, b;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        sum += a*b;

    }
    if(sum == x)cout << "Yes";  
    else cout <<"No";
}