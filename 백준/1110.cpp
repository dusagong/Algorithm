#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp1;
    int temp2;
    int count = 0;
    int cp = n;
    while(1){
        temp1 = cp % 10;
        temp2 = cp/10 + temp1;
        cp = 10 * temp1 + temp2%10;
        count ++;
        if(cp == n)break;   



    }

    cout << count;
}