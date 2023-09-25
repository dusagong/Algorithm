#include <iostream>
#include <string>
using namespace std;

bool chk(int n){
    string a = to_string(n);
    for(int i = 0; i < a.length(); i++){
        if(a[i] != '4'&&a[i] != '7'){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = n; i>0; i--){
        if(chk(i)){
            cout << i;
            break;
        }
        // else cout << i << "\n";
    }
}