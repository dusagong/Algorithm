#include <iostream>
using namespace std;

int gcd(int a, int b);
int main(){
    int n;
    cin >> n;
    int first;
    cin >> first;
    int circle;
    int temp;
    for(int i = 0; i < n - 1; i++){
        cin >> circle;
        temp = gcd(first,circle);
        cout << first / temp << "/" << circle / temp << "\n";
    }
}

int gcd(int a, int b) 
{ 
	int mod = a % b;
    
	while (mod > 0)
	{
		a = b;
		b = mod;
		mod = a % b;
	}
	
    return b;
}