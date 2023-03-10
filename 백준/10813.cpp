#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int* a = new int[n]();
    for(int l = 0; l < n; l++){
        a[l] = l + 1;
    }
    int i, j;
    int temp;
    for(int l = 0; l < m; l++){
        cin >> i >> j;
        i--;
        j--;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(int l = 0; l < n; l++){
        cout << a[l] <<" ";
    }
}