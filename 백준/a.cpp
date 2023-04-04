#include <iostream>
using namespace std;
long fib3 = 0;
long long fibR(int x) {
    if(x == 3)fib3 ++;
   if(x < 2) {
      return(x);
   }else {
      return(fibR(x-1)+fibR(x-2));
   }
}
long long fibDP(int n)
{
    if (n <= 1)
        return n;
    return fibDP(n - 1) + fibDP(n - 2);
}
int main() {
   int x , n, i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) {
      cout << " " << fibR(i);
      i++;
   }
   cin >> n;
   i = 0;
   cout << "\nFibonnaci Series : ";
   while(i < n) {
      cout << " " << fibDP(i);
      i++;
   }
   return 0;
}