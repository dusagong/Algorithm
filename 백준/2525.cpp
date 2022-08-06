#include <iostream>
using namespace std;

int main(){
    int h, m;
    cin >> h >> m;

    int t;
    cin >> t;
    int count = 0;
    int hup;
    int mup;
    hup = t/60;
    mup = t%60;
    m += mup;
    if(m >59){
        m-=60;
        count++;
    }
    h += hup + count;

    if(h > 23){
        h -= 24;
    }
    cout << h << " " << m;


}