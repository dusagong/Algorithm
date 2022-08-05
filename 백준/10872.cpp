#include <iostream>
using namespace std;
int factorial(int n);
int main(){
    int n;
    int a;
    cin >> n;
    if(n == 0)a = 1;
    else{
        a = factorial(n);
    }
    cout << a <<endl;

}
int factorial(int n){
    if(n==1)return 1;
    else return n * factorial(n-1);
}