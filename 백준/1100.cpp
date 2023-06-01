#include <iostream>
using namespace std;

int main(){
    char arr[8][8];
    int count = 0;
    for(int i = 0; i < 8; i ++){
        for(int j = 0; j < 8; j++){
            cin >> arr[i][j];
            if((i + j)% 2 == 0 && arr[i][j] == 'F')count++;
        }
    }
    cout << count;
}
