#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    stack<int> s;
    ios_base::sync_with_stdio(0); cin.tie(0);
    int temp;
    int swt;
    int index = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);

    }
    while(1){
        
    }


    // while(index < n - 1){
    //     int swt = 1;
    //     for(int i = index + 1; i < n; i++){
    //         if(a[i] > a[index]){
    //             b.push_back(a[i]);
    //             index++;
    //             swt = 0;
    //             break;
    //         }
    //     }
    //     if(swt == 1){
    //         b.push_back(-1);
    //         index ++;
    //     }
    // }
    b.push_back(-1);
    
    for(int i = 0; i < b.size(); i++){
        cout << b[i] <<" ";
    }
    

}