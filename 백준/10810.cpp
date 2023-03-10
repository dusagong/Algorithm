#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int* a = new int[n]();
    int i, j, k;
    for(int l = 0; l < m; l++){
        cin >> i >> j >> k;
        for(int o = i - 1; o <j; o++){
            a[o] = k;
        }
    }
    for(int l = 0; l < n; l++){
        cout << a[l] <<" ";
    }
}