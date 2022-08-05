#include <iostream>
using namespace std;
void swap(int* a, int* b);

int main(){
    int n;
    cin >> n;
    int arr[10000] ={0,};
    int num;
    for (int i = 0; i < n; i++){
        cin >> num;
        arr[num-1]++;

    }
    
    for (int i = 0; i < n; i++){
        if(arr[i] != 0){
            for(int j = 0; j < arr[i]; j++)
            cout << i + 1 << "\n";

        }
    }
    
}
