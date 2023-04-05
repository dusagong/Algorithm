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

    for(int i = 0; i < 20; i++){
        getline(cin , s);
        a1 = split(s, ' ');
        
    }
    float total = 0;
    int num = 0;
    for(int i = 0 ; i < 20; i ++){
        // cout << a3[i]<<"\n";
        switch(a1[i][2]){
            case "A+":
                total += 4.5*stoi(a1[i][2]);
                num += stoi(a1[i][2]);
            // case "A0":
            //     total += 4.0*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "B+":
            //     total += 3.5*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "B0":
            //     total += 3.0*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "C+":
            //     total += 2.5*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "C0":
            //     total += 2.0*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "D+":
            //     total += 1.5*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "D0":
            //     total += 1.0*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
            // case "F":
            //     total += 0*stoi(a1[i][2]);
            //     num += stoi(a1[i][2]);
        }
    }
    
    cout << total / num;
}