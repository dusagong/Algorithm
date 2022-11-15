#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    int a[3] = {0,};
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s =="1/2"){
            a[1]++;
        }
        else if(s =="1/4"){
            a[0]++;
        }
        else{
            a[2]++;
        }
    }
    if(a[2] >= a[0]){
        sum += a[2];
        if(a[1] % 2 == 0){
            int temp = a[1]/2;
            sum += temp;
        }
        else {
            int temp = a[1]/2 + 1;
            sum += temp; 
        }
    }
    else {
        int k = a[0] - a[2];
        sum += a[2];
        if(a[1] % 2 == 0){
            int temp = a[1]/2;
            sum += temp;
            if(k % 4 ==0){
                sum += k/4;
            }
            else sum += (k/4 +1);
        }
        else {
            int temp = a[1]/2 + 1;
            sum += temp; 
            if(k > 2){
                k -= 2;
                if(k % 4 ==0){
                    sum += k/4;
                }
                else sum += (k/4 +1);
            }
        }

    }
    cout << sum;


}