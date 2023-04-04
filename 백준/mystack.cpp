#include <iostream>
#include <stack>
using namespace std;

class Mystack{
    private:
        int top;
        int *stack;
    public:
        Mystack();
        bool init(); 
        bool stack_empty();
        void push(int element);
        int pop();
};

Mystack::Mystack(){
    top = -1;
    stack = new int[5];
}

bool Mystack::init(){
    top = -1;
    return true;
}

bool Mystack::stack_empty(){
    return (top == -1);
}

void Mystack::push(int element){
    if(top == 4){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    stack[top] = element;
}

int Mystack::pop(){
    if(stack_empty()){
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    int element = stack[top];
    top--;
    return element;
}

int main(){
    Mystack s1;
    int list[5] = { 32, 123, 27, 131, 242 }, i, x;

    s1.init();

    for (i = 0; i < 5; i++ ){
        if (list[i]> 100){
            s1.push( list[i] );
        }
    }

    while ( ! s1.stack_empty() ){
        x = s1.pop();
        cout << x << endl ; 
    }

    return 0;
}