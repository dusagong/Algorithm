#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int d;
    string a;
    cin >> a;
    cin >> d;
    for(long i = 0; i < d; i++){
        long c = 0;
        if(a[c] == 'A'){
            a[c] = 'B';
            continue;
        }
        else{
            while(1){
                if(a[c] =='\0')break;
                if(a[c] =='A'){
                    a[c] = 'B';
                    break;
                }
                a[c] = 'A';
                c++;
                continue;
            }
        }
        
    }
    cout << a;

}