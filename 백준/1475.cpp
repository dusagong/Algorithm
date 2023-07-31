#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[10] = {0,};
    int max = 0;
    while(n > 0){
        arr[n%10] ++;
        n /= 10;
    }
    int temp;
    temp = (arr[6] + arr[9] + 1) / 2;
    arr[6] = 0;
    arr[9] = 0;
    max = temp;
    for(int i = 0; i < 10; i++){
        if(max < arr[i])max = arr[i];
    }
    cout << max;
    

}

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int max = 0;
//     int count = 0;
//     int num[10] = {0,};
//     int check;// int 한자리씩 끊으려고 만든 변수

//     int sixnine;//6,9는 구별안하니까 그냥 둘이 더해버리고 +0.5 하고 2로나누면 됨


//     while(1){
//         if(n < 10){
//             num[n]++;
//             break;
//         }
//         check = n%10;
//         num[check]++;

//         n /= 10;

//     }
//     sixnine = (num[6] + num[9] + 1)/2;
//     for(int i = 0; i < 10; i++){
//         if(i == 6)continue;
//         if(i == 9){
//             if(sixnine > max){
//                 max = sixnine;
//                 //처음에 break를 여기다가 놓았더니 이상한 반례가 생겼었다. 조건문안에 break넣으면 위험하구나,,
//             }
//             break;
//         }
//         if(num[i] > max){
//             max = num[i];
//         }


//     }
//     cout << max;
// }