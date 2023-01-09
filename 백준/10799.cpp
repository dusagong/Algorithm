#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int level = 0;
    int extra = 0;
    int swt;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            level++;
            swt = 1;
            extra++;
        }
        else{
            if(swt == 1){
                level--;
                extra--;
                swt = 0;
                sum += level;
                sum += extra;
                extra = 0;
            }
            else{
                level--;
            }
        }
    }
    sum += level;

    cout << sum;
}