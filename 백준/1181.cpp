#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    string *s = new string[t];
    vector<string> a;
    int check;
    for(int i = 0; i < t; i++){
        cin >> s[i];
    }
    for(int i = 1; i <= 50; i++){
        for(int j = 0; j < t; j++){
            check = 0;
            if(s[j].length() == i){
                
                for(int l = 0; l < j; l++){
                    if(s[j] == s[l]){
                        check = 1;
                        break;
                    }
                }
                if(check == 1)continue;
            
                a.push_back(s[j]);
            }
        }
        sort(a.begin(),a.end());
        for(int k = 0; k < a.size(); k++){
            cout << a[k] <<"\n";
        }
        a.clear();

    }


}