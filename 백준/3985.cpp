#include <iostream>

using namespace std;

int main(){
    int l, n;
    cin >> l >> n;
    int* array = new int[l]();
    int a, b;
    int max1 = 0;
    int maxindex1 = 0;
    int max2 = 0;
    int maxindex2 = 0;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(b - a + 1 > max1){
            max1 = b - a + 1 ;
            maxindex1 = i + 1;
        }
        for(int j = a - 1; j < b; j++){
            if(array[j]==0){
                array[j] = i + 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = 0; j < l; j++){
            if(array[j] == i + 1){
                temp ++;
            }
        }
        if(temp > max2){
            max2 = temp;
            maxindex2 = i + 1;
        }
    }

    cout << maxindex1 << "\n";
    cout << maxindex2 << "\n";
        // for(int j = 0; j < l; j++){
        //     cout << array[j] << "\n";
        // }
}