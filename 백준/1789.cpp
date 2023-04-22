#include <iotream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;
    while(1){
        i++;
        sum += i;
        if(sum == n )break;
    }
    cout << i;
}