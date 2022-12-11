#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int arr[12][12];  
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>> arr[i][j];
        }

    }

    vector<int> choose;
    int sum = 0;
    /////////////////////////////////

    for(int a = 0; a < 2; a++){
        for(int b = 2; b < 4; b++){
            for(int c = 4; c < 6; c++){
                for(int d = 6; d < 8; d++){
                    for(int e = 8; e < 10; e++){
                        for(int f = 10; f < 12; f++){
                            if(a == 0){
                                sum += arr[a][a+1];
                                sum += arr[a+1][b];
                                
                            }
                            else if(a == 1){
                                sum += arr[a][a-1];
                                sum += arr[a-1][b];
                            }
                            
                            if(b == 2){
                                sum += arr[b][b+1];
                                sum += arr[b+1][c];
                          
                            }
                            else if(b == 3){
                                sum += arr[b][b-1];
                                sum += arr[b-1][c];
                            }
                            if(c == 4){
                                sum += arr[c][c+1];
                                sum += arr[c+1][d];
                          
                            }
                            else if(c == 5){
                                sum += arr[c][c-1];
                                sum += arr[c-1][d];
                            }
                            if(d == 6){
                                sum += arr[d][d+1];
                                sum += arr[d+1][e];
                          
                            }
                            else if(d == 7){
                                sum += arr[d][d-1];
                                sum += arr[d-1][e];
                            }
                            if(e == 8){
                                sum += arr[e][e+1];
                                sum += arr[e+1][f];
                          
                            }
                            else if(e == 9){
                                sum += arr[e][e-1];
                                sum += arr[e-1][f];
                            }
                            if(f == 10){
                                sum += arr[f][f+1];
                          
                            }
                            else if(f == 11){
                                sum += arr[f][f-1];
                            }
                            choose.push_back(sum);
                        
                            sum =0;
                            
                        }
                    }
                }   
            }
        }   
    }
    sort(choose.begin(), choose.end());

    cout << choose[0];



}