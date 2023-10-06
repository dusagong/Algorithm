#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    string inputString = "baby sukhwan tururu turu very cute tururu turu in bed tururu turu baby sukhwan";

    vector<string> words;
    istringstream iss(inputString);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    int m = n /14;
    int a = n % 14;
    // 3 4 7 8 11 22
    if(a == 3 || a == 7 || a == 11 ){
        if(m>=3){
            cout << "tu+ru*"<<m+2;
        }
        else {
            cout << words[a-1];
            for(int i = 0; i < m; i++){
                cout <<"ru";
            }
        }
        
    }
    else if(a == 4 || a == 8 || a == 12){
        if(m>=4){
            cout << "tu+ru*"<<m+1;
        }
        else {
            cout << words[a-1];
            for(int i = 0; i < m; i++){
                cout <<"ru";
            }
        }
        
    }    
    else {
        if(a!=0)
        cout << words[a-1];
        else cout << words[13];
    }

    


}