#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int temp;
    int max = 0;
    for(int i = 0; i < n - 1; i++){
        temp = 0;
        for(int j = i + 1; j < n; j++){
            if(a[i] <= a[j]){
                break;
            }
            else{
                temp ++;
            }
                if(max < temp)max = temp;

        }
    }
    cout << max;
}