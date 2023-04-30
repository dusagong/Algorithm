#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(){
    int n;
    cin >> n;   
    vector<int> a;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    long long lcm = a[0];
    long long max = a[0];
    long long min = a[0];
    
    for (int i = 1; i < a.size(); i++) {
        lcm = (lcm * a[i]) / gcd(lcm, a[i]);
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
    }
        if(max == lcm) 
        cout << min * lcm;
        else cout << lcm;

}