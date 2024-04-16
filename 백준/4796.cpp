#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int temp;
    int sum;
    int count = 0;
    while(1){
        sum = 0;
        count++;
        cin >> a >> b >> c;
        if(a == 0 && b ==0){
            if(c == 0)break;
        }
        temp = c / b;
        sum += temp * a;
        if(a > c%b)sum += c%b;
        else sum += a;
        cout << "Case "<< count<<": " << sum <<"\n";
    }   


}