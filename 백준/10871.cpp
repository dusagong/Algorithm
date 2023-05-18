#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, t;
    cin >> n >> x;
    while(n--){
        cin >> t;
        if(t < x) cout << t << ' '; 
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int n,x,a[10005];
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> n >> x;
//     for(int i = 0; i < n; i++)cin >> a[i];
//     for(int i = 0; i < n; i++)
//         if(a[i] < x)cout << a[i] <<' ';
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n,x;
//     cin >> n >> x;
//     int a;
   
//     for(int i = 0; i < n; i++){
//        cin >> a;
//         if(a < x)cout << a << " ";
    
//     }
    
    
// }