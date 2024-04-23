#include <iostream>

using namespace std;
long long pow(int a, int b){
    long long temp =1 ;
    for(int i = 0; i < b; i++){
        temp *= a;
        temp  %=  1234567891;
    }
    return temp;
}
int main(){
    int n;
    cin >> n;
    char alphabet;
    long long sum = 0;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> alphabet;
        temp = alphabet -'a' + 1;
        // cout << (temp * static_cast<long long>(pow(31, i))) << "\n";
        sum += (temp *(pow(31, i)))% 1234567891; // pow의 반환값을 long long으로 변환
    }
    sum %=  1234567891;
    cout << sum;
}

