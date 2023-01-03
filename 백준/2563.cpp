#include <iostream>
using namespace std;

int main(){
    int pnum;
    cin >> pnum;
    int arr[101][101] = {0,};
    int x, y;
    int sum = 0;
    for(int i = 0; i < pnum; i++){
        cin >> x >> y;
        for(int j = x; j < x + 10; j++){
            for(int k = y; k < y+ 10; k++){
                arr[j][k] = 1;
            }
        }
    }
    for(int i = 1; i < 101; i++){
        for(int j = 1; j < 101; j++){
            if(arr[i][j] == 1){
                sum++;
            }
        }
    }
    cout <<sum;

}