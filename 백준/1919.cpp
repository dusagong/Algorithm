#include <bits/stdc++.h>
using namespace std;

int arr[26] = {0,};
int brr[26] = {0,};
int main(){
    string a, b;
    cin >> a >> b;
    int count = 0;
    int same = 0;
    for(int i = 0; i < a.length(); i++){
        arr[a[i] - 'a']++;
        count++;
    }
    for(int i = 0; i < b.length(); i++){
        brr[b[i] - 'a']++;
        count++;
    }
    for(int i = 0; i < 26; i ++){
        same += min(arr[i], brr[i]);
    }
    cout << count - 2*same;
}
int min(int a, int b){
    if(a <= b)
    return a;
    else return b;
}