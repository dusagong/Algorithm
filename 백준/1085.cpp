#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int minx;
    int miny;
    if(x > w-x){
        minx = w-x;
    }
    else minx = x;
    if(y > h-y){
        miny = h-y;
    }
    else miny = y;
    if(minx <= miny){
        cout << minx;
    }
    else cout << miny;
}