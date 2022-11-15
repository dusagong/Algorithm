#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    
    int max;
    while(1){
        cin >> a >> b >> c;
        max = a;
        if(b > max)max = b;
        if(c > max)max = c;
        if(max == 0)return 0;
        else if(a == max){
            if(a*a == b*b + c*c){
                cout << "right\n";
            }
            else cout << "wrong\n";
        }


        else if(b == max){
            if(b*b == a*a + c*c){
                cout << "right\n";
            }
            else cout << "wrong\n";

        }
        else{
            if(c*c == a*a + b*b){
                cout << "right\n";
            }
            else cout << "wrong\n";

        }
    }
    
}