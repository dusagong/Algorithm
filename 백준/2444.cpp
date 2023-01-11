#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 2*n - 1; i++){
        if(i < n){
            for(int j = n -1; j > i; j--){
                cout << " ";
            }
            for(int j = 0; j < 2*i + 1; j ++ ){
                cout << "*";
            }
            cout << "\n";
        }
        else{
            for(int j = n -1; j < i; j++){
                cout << " ";
            }
            for(int j = 2*n - 3; j > 2*(i - n); j --){
                cout << "*";
            }
            cout << "\n";
        }
        
    }
}