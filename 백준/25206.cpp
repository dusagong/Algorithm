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
        vector<vector<string>>a2;

        for(int i = 0; i < 20; i++){
            getline(cin , s);
            a1 = split(s, ' ');
            a2.push_back(a1);
        }
        float total = 0;
        float num = 0;
        for(int i = 0 ; i < 20; i ++){
            if(a2[i][2] == "A+"){
                total += 4.5*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "A0"){
                total += 4.0*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "B+"){
                total += 3.5*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "B0"){
                total += 3.0*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "C+"){
                total += 2.5*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "C0"){
                total += 2.0*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "D+"){
                total += 1.5*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "D0"){
                total += 1.0*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else if(a2[i][2] == "F"){
                total += 0*stof(a2[i][1]);
                num += stof(a2[i][1]);
            }
            else continue;
            
            
        }
        
        cout << total / num;
    }