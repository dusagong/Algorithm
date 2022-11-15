#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    int *arrx = new int[n];
    int *arry = new int[n];
    for(int i = 0; i < n; i++){
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        cin >> arrx[i] >> arry[i];
    }
    //////////////시간초과
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(arrx[i] > arrx[j]){
    //             swap(arrx[i],arrx[j]);
    //             swap(arry[i],arry[j]);
    //         }
    //         else if(arrx[i] == arrx[j]){
    //             if(arry[i] > arry[j]){
    //                 swap(arry[i],arry[j]);
    //                 swap(arrx[i],arrx[j]);
    //             }
    //         }
    //     }
    
    // }

    

    for(int i = 0; i < n; i++){
        cout <<  arrx[i] << " " << arry[i] << "\n";
    }
    

}
