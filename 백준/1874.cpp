#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    int *a = new int[t];
    stack<int> s;
    vector<char>l;
    for(int i = 0; i < t; i ++){
        cin >> a[i];
    }

    int *b = new int[t]{}; // 0 또는 1로 체크하여 이미 푸시가 된 애인지 확인하기.

    for(int i = 0; i < t; i++){
        if( i == 0){
            for(int j = 0; j < a[i]; j++){
                if(b[j] != 0)continue;
                s.push(j+1);
                l.push_back('+');
                b[j] = 1;

            }
        }
        else{
            for(int j = a[i-1]; j < a[i]; j++){
                if(b[j] != 0)continue;
                s.push(j+1);
                l.push_back('+');
                b[j] = 1;

            }
        }
        
        if(s.top() != a[i]){
            cout << "NO";
            return 0;
        }
        s.pop();
        l.push_back('-');

    }
    for(int i = 0; i < l.size(); i++){
        cout << l[i] << "\n";
    }
}