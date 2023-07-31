#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[26] = {0,};
    string a;
    cin >> a;
    int temp;
    for(int i = 0; i < a.length(); i++){
        temp = a[i] - 'a';
        arr[temp] ++;
    }
    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
}