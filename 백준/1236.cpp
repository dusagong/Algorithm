#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    char **arr= new char*[a];
    for(int i = 0; i < a; i++){
        arr[i] = new char[b];
    }
    int count = 0;
    int temp;
    for(int i = 0; i < a; i++){
        temp = 0;
        for(int j = 0; j < b; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'X')temp = 1;
        } 
        if(temp == 1)count ++;
    }
    cout << a - count;
}