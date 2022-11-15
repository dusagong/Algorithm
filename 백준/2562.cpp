#include <iostream>

using namespace std;

int main(){
    int max = 0;
    int maxi;
    int n;
    for(int i = 0; i < 9; i ++){
        cin >> n;
        if( n > max){
            max = n;
            maxi = i+1;
        }
    }
    cout << max << "\n" << maxi;
}