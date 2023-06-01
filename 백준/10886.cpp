#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    int c1 =0;
    int c0 =0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 0)c0++;
        else c1++;
    }
    if(c1 < c0)cout << "Junhee is not cute!";
    else cout << "Junhee is cute!";
}