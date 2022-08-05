#include <iostream>
using namespace std;

void star(int n);
void square(int a);
void empty(int b);

int main(){
    int n;
    cin >> n;

    if(n == 3){
        square(n);
    }
    else star(n);
    
    







}
void square(int a){
    cout <<"***\n* *\n***";
}
void empty(int b){
    if(b==3){
        cout<<"   \n   \n   ";
    } 
    else{
        for(int c = 1; c < c*c; c++){
            for(int d = 0; d < d*d; d++){
                cout << " ";
            }
            cout << endl;
        }
    }

}


void star(int n){
    for(int c = 1; c < c*c; c++){
        cout << 
    }


}