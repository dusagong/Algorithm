#include <iostream>
using namespace std;
int main(){
     int n;
    cin >> n;
    for(int i = n - 1; i > 0; i--){
        for(int j = 0; j < n - i ; j++){//4 3 2 1
            cout <<"*";
        }
        for(int j = 0; j < 2*i  ; j++){
            cout << " ";
        }
        for(int j = 0; j < n - i ; j++){//4 3 2 1
            cout <<"*";
        }
        

        cout << "\n";
    }
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j <n - i; j++){//4 3 2 1
            cout <<"*";
        }
        for(int j = 0; j < 2*i ; j++){
            cout << " ";
        }
        for(int j = 0; j <n - i; j++){//4 3 2 1
            cout <<"*";
        }
        cout << "\n";
    }
}