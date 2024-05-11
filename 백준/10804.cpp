#include <iostream>
#include <stack>
using namespace std;

int main(){
    int arr[20];
    for(int i = 0; i < 20; i++){
        arr[i] = i+1;
    } 
    int a, b;
    for(int i = 0; i < 10; i++){
        stack<int> stack;
        cin >> a >> b;
        for(int j = a-1; j <b; j++){
            stack.push(arr[j]);
        }
        for(int j = a-1; j <b; j++){
            arr[j] = stack.top();
            stack.pop();
        }

    }
    for(int i = 0; i < 20; i++){
        cout << arr[i] << " ";
    }
    return 0;
}