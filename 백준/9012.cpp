 #include <iostream>
 #include <stack>

 using namespace std;

 int main(){
    stack<char> s; 
    int t;
    int a;
    int check = 0;
    string input;
    cin >> t;

    for(int i = 0; i < t; i++){
        a = 0;
        check = 0;
        cin >> input;
        while(s.empty() == false){
            s.pop();
        }
        for(int j = 0; j < input.length(); j++ ){
            s.push(input[j]);
            if(input[j] == '('){
                a++;
            }
            else a--;

            if(a < 0) {
                check = 1;
                break;
            }

        }
        if(a != 0)check = 1;
        if(check == 1){
            cout << "NO\n";
            continue;
        }
        else cout << "YES\n";

    }

 }