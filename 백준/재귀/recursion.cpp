#include <iostream>
#include <unordered_map>
using namespace std;

void printAll(int n){
    cout << n <<" ";

    if(n == 1)return;
    printAll(n-1);

}  
void printAllBarking(int n){
    if(n == 0) return;//기저조건

    cout << n << ' '; // 각 항목별 행동
    printAllBarking(n-1);
}

int sumAll(int n){
    if(n == 1)return 1;

    int sum;
    sum = n;
    sum += sumAll(n-1);
    return sum;
}

int sumAllBarking(int n){
    if(n == 0)return 0;
    return n + sumAll(n-1);
}


int factorial(int n){
    if(n==1) return 1;

    int mul = n;
    mul *= factorial(n-1);
    return mul;
}

int main(){
    int n;
    cin >> n;
    // printAll(n);
    // printAllBarking(n);

    // int total;
    // total = factorial(n);
    // cout << total;

    cout << sumAll(n);
    cout << sumAllBarking(n);
    return 0;
}

