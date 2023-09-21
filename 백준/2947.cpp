#include <iostream>

using namespace std;

void swap(int *arr, int i){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
            cout << arr[0] <<" "<< arr[1] <<" "<< arr[2] <<" "<< arr[3] <<" "<< arr[4] <<"\n";

}

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    while(1){
        if(arr[0] == 1 && arr[1] ==2 && arr[2] ==3 && arr[3] ==4 && arr[4] ==5 )break;   
        for(int i = 0; i < 4; i++){
            if(arr[i] > arr[i+1])swap(arr,i);
        }
    }
    
    

}