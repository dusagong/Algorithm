#include <bits/stdc++.h>
// #include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int a[26] = {0,};
    for(int i = 0; i < s.length(); i++){
        a[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        cout << a[i] << " ";
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[26] = {0,};
//     string a;
//     cin >> a;
//     int temp;
//     for(int i = 0; i < a.length(); i++){
//         temp = a[i] - 'a';
//         arr[temp] ++;
//     }
//     for(int i = 0; i < 26; i++){
//         cout << arr[i] << " ";
//     }
// }

