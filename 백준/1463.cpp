#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int,int>mapmap;
void minstep(int n, int time){
    if(mapmap.find(n)!= mapmap.end()){
        if(mapmap[n] >time){
            mapmap[n]=time;
        }
    }else{
        mapmap[n]=time;
    }
    if(n == 1){ return ;}

    if(n %3 == 0){
        minstep(n/3, mapmap[n]+1);
    }if(n %2 == 0){
        minstep(n/2, mapmap[n]+1);
        
    }
        minstep(n-1, mapmap[n]+1);


    return;
}  

int main(){
    int n;
    cin >> n;
    minstep(n,0);
    cout << mapmap[1];
}

