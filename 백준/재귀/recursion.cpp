#include <iostream>
#include <unordered_map>
using namespace std;

void printAll(int n){
    cout << n <<"\n";

    if(n == 1)return;
    printAll(n-1);

}  

int sumAll(int n){
    if(n == 1)return 1;

    int sum;
    sum = n;
    sum += sumAll(n-1);
    return sum;
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
    int total;
    total = factorial(n);
    cout << total;
    return 0;
}

