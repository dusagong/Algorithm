#include <bits/stdc++.h>

using namespace std;

int a[1000001] = {};
// int b[2000001] = {};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a[temp] = 1;
    }
    int sum;
    cin >> sum;
    int count = 0;
    for( int i = 0 ; i < 1000001; i ++){
        if(a[i] == 1){
            if(sum > i){
                if((sum - i) <=1000000 && ((sum - i) != i)){
                    if(a[sum - i] == 1)count ++;
                }
            }
        }
    }
    cout << count/2;

}

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     vector<int> v;
//     int temp;
//     for (int i = 0; i < n; i++){
//         cin >> temp;
//         v.push_back(temp);
//     }
//     sort(v.rbegin(),v.rend());
//     // cout << v[0] << "\n";
//     int *arr = new int[v[0]]{0,};
//     int sum;
//     cin >> sum;
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         arr[v[i] - 1] = 1;
//         if(arr[sum - v[i] - 1] == 1){
//             if(arr[v[i] - 1] != arr[sum - v[i] -1])
//             count++;
//         }
//     }
//     cout << count;
// }