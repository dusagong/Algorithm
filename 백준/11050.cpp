#include <iostream>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int sum = 1;
	for(int i = 0; i < k; i++){
		sum *= (n - i);
	}
	int divide = 1;
	for(int i = 0; i < k; i++){
		divide *= (k - i);
	}
	cout << sum / divide;
}

