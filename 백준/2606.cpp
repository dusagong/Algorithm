// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int t;
//     cin >> t;
//     int a, b;
//     vector<int> k;
//     for(int i = 0; i < t; i++){
//         cin >> a >> b;
//         if(a == 1){
//             k.push_back(b);
//         }
//         else{
//             for(int j = 0; j < k.size(); j++){
//                 if(a == k[j]){
//                     k.push_back(b);
//                     break;
//                 }
//             }
//         }
//     }
//     sort(k.begin(),k.end());
//     int temp = 0;
//     int count = 0;
//     for(int i = 0; i < k.size(); i++){
//         if(k[i] == temp)count ++;
//         temp = k[i];
//     }
//     cout << k.size() - count;

// }