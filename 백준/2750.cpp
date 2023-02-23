#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int *array = new int[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int temp;
    int i, j;
    // for(i=n-1; i>0; i--){
    //     for(j=0; j<i; j++){
    //         if(array[j]>array[j+1]){
    //             temp = array[j];
    //             array[j] = array[j+1];
    //             array[j+1] = temp;
    //         }
    //     }
    // }
    for(int i = 0; i < n; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << array[i] << "\n";
    }
}
