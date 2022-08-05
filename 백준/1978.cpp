#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c;//상태
    int d = 0;//소수개수
    for(int i = 0;i < n;i++){
        c = 0;
        int a;
        cin >> a;
        if(a == 1)continue;
        for(int j = 2; j<a;j++){
            if(a % j == 0){
                c = 1;
                break;
            }
        }

        if(c == 1){
            continue;
        }
        else d++;
    }
    cout << d;
}