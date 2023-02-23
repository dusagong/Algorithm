#include <iostream>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    cin >> n;
    int arr[10001] = {0,};
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr[temp]++;
    }
    for(int i = 0; i < 10001; i++){
        if(arr[i] == 0)continue;
        for(int j = 0; j < arr[i]; j++){
            cout << i << "\n";
        }
    }
}
