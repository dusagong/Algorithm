#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        cout << temp / 25 << " ";
        temp %= 25;
        cout << temp / 10 << " ";
        temp %= 10;
        cout << temp / 5 << " ";
        temp %= 5;
        cout << temp / 1 << "\n";

    }
}