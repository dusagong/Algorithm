#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    for(int i = 1; i < n; i++){
        cin >> b;
        for(int j = 0; j < a.length(); j++){
            if(a[j] != b[j]){
                a[j] = '?';
            }
        }
    }
    cout << a;
}