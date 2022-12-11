#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a[2];

    int t;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                cin >> t;
                a[i].push_back(t);
            }
        }
    }
    int i = 0;
    for(int j = 0; j < n; j++){
        for(int k = 0; k < m; k++){
            
            cout << a[0][i] + a[1][i] << " ";
            i++;
        }
        cout << "\n";
    }
}