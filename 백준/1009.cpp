#include <iostream>
#include <cmath>

using namespace std;

int main(){
int t;
    cin >>t;
    long long c;
    long long a,b;
    for(int i = 0; i < t ; i++){
        cin >> a >> b;
        a %= 10;
        if(a == 0 || a == 1 || a == 5 || a == 6){
            if(a == 0) a += 10;
            cout << a<<"\n";
            continue;
        }
        else if(a == 4 || a == 9){
            b %= 2;
            if(b == 0)b = 2;
            c = pow(a,b);
            while(1){
                c %= 10;
                if(c < 10){
                    cout << c <<"\n";
                    break;
                }
            
            }
            
            continue;
        }
        else{
            b %= 4;
            if(b == 0)b+=4;
            c = pow(a,b);
            while(1){
                c %= 10;
                if(c < 10){
                    cout << c <<"\n";
                    break;
                }
              
            }
           
        }
        
            
    }

    
    
}