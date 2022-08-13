#include <iostream>
using namespace std;

int main(){
    int y;
    cin >> y;
    int check;
    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 == 0){
                check = 1;
            }
            else check = 0;
        }
        
        else check = 0;
        
    }
    cout << check;
    
}