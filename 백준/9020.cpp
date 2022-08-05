#include <iostream>
using namespace std;

bool dsc(int a);

int main(){
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
        int n;
        cin >> n;
        for(int i = n/2; i >= 1; i--){
            if(dsc(i) && dsc(n-i)){
                cout << i << " " << n - i << endl;
                break;
            }
            
        }
    }


}

bool dsc(int a){
    bool t = true;
    if(a == 2) return true;
    for(int i = 2; i < a; i++){

        if(a % i == 0){
            t = false;
            break;
        }
        
    }
    return t;

}