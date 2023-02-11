#include <iostream>
#include <vector>
using namespace std;

int gcd(int x, int y){

    int temp;

    if(x<y){

        temp = x;

        x= y;

        y = temp;

    }

    int rest;

    while(y!=0){

        rest = x%y;

        x = y;

        y = rest;

    }

    return x;

}

int main(){
    int t;
    cin >> t;
    vector<int> a;
    int temp;
    int c;
    long long sum;
    for(int i = 0; i < t; i++){
        sum = 0;
        cin >> temp;
        for(int j = 0; j < temp; j++){
            cin >> c;
            a.push_back(c);
        }
        for(int j = 0; j < temp - 1; j++){
            for(int k = j + 1; k < temp; k++){
                sum += gcd(a[j],a[k]);
            }
        }
        a.clear();
        cout << sum <<"\n";
    }   
    
}