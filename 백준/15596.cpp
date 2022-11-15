#include <iostream>
#include <vector>
using namespace  std;

long long sum(std::vector<int> &a);
int main(){

    vector<int> a;
  

}

long long sum(std::vector<int> &a){
    int sum = 0;
    int i =0;
    while(1){
        if(a.empty() == true){
            return sum;
            break;
        }
        sum += a[i];
        i++;
    }
    return sum;
}