#include <iostream>
using namespace std;

int main(){
    int arr[9][9];
    int maxnum = 0;
    int maxa = 0;
    int maxc = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(arr[i][j] > maxnum){
                maxnum = arr[i][j];
                maxa = i;
                maxc = j;
            }
        }
    }

    cout << maxnum << "\n";
    cout << maxa + 1 << " " << maxc + 1;

}