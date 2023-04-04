#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        result.push_back(temp);
    }

    return result;
}

int main(){
    string s;
    vector<string>a1;
    vector<string>a2;
    vector<string>a3;
    for(int i = 0; i < 20; i++){
        getline(cin , s);
        a1 = split(s, ' ');
        for (int i = 0; i < a1.size(); i++) {
            cout << a1[i];
        }
        cout << "\n";
        // cout << a1[i] << a2[i] <<a3[i]<<"\n";
    }
    float total = 0;
    int num = 0;
    // for(int i = 0 ; i < 20; i ++){
    //     // cout << a3[i]<<"\n";
    //     switch(a3[i][0]){
    //         case 'A':
    //             if(a3[i][1]=='+'){
    //                 total += 4.5*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             else{
    //                 total += 4.0*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             break;
    //         case 'B':
    //             if(a3[i][1]=='+'){
    //                 total += 3.5*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             else{
    //                 total += 3.0*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             break;
    //         case 'C':
    //             if(a3[i][1]=='+'){
    //                 total += 2.5*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             else{
    //                 total += 2.0*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             break;
    //         case 'D':
    //             if(a3[i][1]=='+'){
    //                 total += 1.5*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             else{
    //                 total += 1.0*stoi(a2[i]);
    //                 num += stoi(a2[i]);
    //             }
    //             break;
    //         case 'F':
    //             total += 0*stoi(a2[i]);
    //             num += stoi(a2[i]);
    //         break;
    //         case 'P':
    //         break;
    //     }
    // }
    
    // cout << total / num;
}