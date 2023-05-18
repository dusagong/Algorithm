#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string a[3];
    cin >> a[0] >> a[1] >> a[2];
    string color[] = {"black","brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    long long temp;
    for(int i = 0; i < 10; i++){
        if(a[0] == color[i]){
            temp = 10 * i;
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        if(a[1] == color[i]){
            temp += i;
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        if(a[2] == color[i]){
            for(int j = 0; j < i; j++){
                temp *= 10;
            }
        }
    }
    cout << temp;
}