#include <iostream>
#include <queue>
using namespace std;

int reverse(int n);

int main(){
    int a, b;
    cin >> a >> b;
    
    while(a%10 == 0){
        a /= 10;
    }
    while(b%10 == 0){
        b /= 10;
    }
    a = reverse(a);
    b = reverse(b);
    cout << reverse(a + b);

}

int reverse(int n){
    int a, b;
    queue<int> q;
    do {
		
		a = n % 10;
		b = n / 10;
		n = b;
		
		q.push(a);

	} while (b!=0);
    int temp = q.size();
    int size = 1;
    for(int i = 0; i < temp - 1; i++){
        size *= 10;
    }
    int sum = 0;
    for(int i = 0; i < temp; i++){
        sum += q.front() * size;
        q.pop();
        size /= 10;
        
    }
    return sum;
    
}
