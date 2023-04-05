#include <iostream>

using namespace std;

int main(){
    int temp;
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> temp;
            if(temp == 0)sum++;
        }
        if(sum == 0){
            cout << "E\n";
        }
        if(sum == 1){
            cout << "A\n";
        }
        if(sum == 2){
            cout << "B\n";
        }
        if(sum == 3){
            cout << "C\n";
        }
        if(sum == 4){
            cout << "D\n";
        }
        sum = 0;
    }
}