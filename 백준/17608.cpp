#include <iostream>

using namespace std;

int main(){
    int number;
    cin>> number;
    int height[100000];
    int count =0;
    for(int i=0;i<number;i++){
        cin>>height[i];

    }
    int max;
    for(int i=number-1;i>=0;i--){
        if(i==number-1){
            max=height[i];  
            count++;
        }
        
        else {
            if(height[i]>max){
                max=height[i];
                count++;
            }
        }

    }
    cout<<count;

}