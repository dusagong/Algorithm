#include <iostream>
using namespace std;

int fibonacci(int n);
int count0 = 0;
int count1 = 0;
int main(){

    int t;
    cin >> t;
    int n;
    int sum0;
    int sum1;
    for(int i = 0; i < t; i ++){
        cin >> n;
        fibonacci(n);
        cout << count0 << " " << count1 << "\n";
        count0 = 0;
        count1 = 0;

    }   

}

int fibonacci(int n) {
    if (n == 0) {
        count0 ++;
        return 0;
    } else if (n == 1) {
        count1++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}