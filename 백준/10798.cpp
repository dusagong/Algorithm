#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<char>> a;
    vector<char> b;
    vector<int> c;
    string temp;
    int max = 0;;
    for(int i = 0; i < 5; i ++){
        cin >> temp;
        if(max < temp.length()){
            max = temp.length();
        }
        c.push_back(temp.length());
        for(int j = 0; j < temp.length(); j++){
            b.push_back(temp[j]);
        }
        a.push_back(b);
        b.clear();
    }

    for(int i = 0; i < max; i++){
        for(int j = 0; j < 5; j++){
            if(c[j] <= i)continue;
            cout << a[j][i];
        }
    }

}