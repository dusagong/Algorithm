#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b;
    int arr[10];
    int count = 0;
    for(int i = 0; i < 10; i++){
        arr[i] = 2;
    }
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(arr[a-1] == 2){
            arr[a-1] = b;
        }
        else{
            if(arr[a-1] != b){
                count++;
                arr[a-1] = b;
            }
            continue;
        }
    }   
    
    cout << count;
}