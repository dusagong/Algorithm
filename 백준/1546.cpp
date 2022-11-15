#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    float *arr = new float[t];
    float max = 0;
    float sum = 0;
    for(int i = 0; i < t; i++){
        cin >> arr[i];
        if(max < arr[i])max = arr[i];

    }
    for(int i = 0; i < t; i++){
        arr[i] /= max;
        sum += arr[i];
    }
    cout << sum/(float)t * 100.0;

}