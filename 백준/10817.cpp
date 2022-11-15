#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b){
        if(b <= c){
            cout << b;
        }
        else{
            if(a >= c){
                cout << a;
            }
            else cout << c;
        }
        
    }
    else if (a == b){
        cout << a;
    }
    else{//a > b
        if(a <= c){
            cout << a;
        }
        else{
            if(b >= c){
                cout << b;
            }
            else cout << c;
        }

    }

}