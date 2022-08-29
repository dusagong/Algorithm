#include <iostream>

using namespace std;

int main(){

    int a;

    int t;
    cin >> t;
    int min = 1000001;
    int max = -1000001;

    for(int i = 0; i < t; i++){

        cin >> a ;
        if(a<min)min = a;
        if(a>max)max = a;
    

    }

    cout <<min << " "<<max;

}