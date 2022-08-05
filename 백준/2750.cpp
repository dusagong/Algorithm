#include <iostream>
using namespace std;

void swap(int* a, int* b);


int main(){
    int n;
    cin >> n;
    int *array = new int[n];
                int temp;

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(array[i] > array[j]){
                swap(&array[i],&array[j]);
            }

        }

    }
    for(int i = 0; i < n; i++){
        cout << array[i] << "\n";
    }

}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}