#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i < n; i++){
        sum += ((long long)n*(long long)i + (long long)i);
    }
    cout << sum;
}