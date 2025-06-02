//자연수 A를 B번 곱한 수를 알고 싶다. 단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.

//첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.


//input 10 11 12
//output 4


//선형재귀. 비효율적방식
#include <iostream>
using namespace std;

//1승 계산가능, k승 계산가능-> 2k승 , 2k+1승 계산 가능.
long long exponent(long long a, long long b, long long c){
    long long val;

    if(b == 1){
        return a%c;
    }

    if(b % 2 == 0){ //2k승 계산산
        long long half = exponent(a,b/2,c);
        val = (( half* half))%c;
    }else{//2k + 1 승 계산. 2k & 1
        val = (exponent(a,b-1,c) * exponent(a,1,c))%c;    
    }

   return val % c;
    
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    long long ex = exponent(a,b,c);
    cout << ex;
}

