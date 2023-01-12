#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;
    int swt = 0;
    int gswt = 0;
    int chk = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] > 64 && s[i] < 91){
            cout << s[i];
            if(swt == 1){
                swt = 0; 
                cout << st.top();
                st.pop();
                   
            }
        }
        else{
            if(s[i] == ')'){
       
                int temp = st.size();
                for(int j = 0; j < temp; j++){
                    if(st.top() == '('){
                        st.pop();
                        break;
                    }
                    cout << st.top();
                    st.pop();
                }
            }
            else{
                if(s[i] =='('){
                    swt = 0;
                
                }
                
                else if(s[i] == '*'|| s[i] =='/'){
                    swt = 1;
                    if(st.size() != 0){
                       if(st.top() == '*' || st.top() == '/'){
                            cout << st.top();
                            st.pop();
                        } 
                    }

                }
                else {
                   int temp = st.size();
                    if(temp != 0 && st.top() !='('){
                        cout <<st.top();
                        st.pop();
                    }
                }
                
                st.push(s[i]);
            }
            
        }
    }
    int temp = st.size();
                    for(int j = 0; j < temp; j++){
                        cout << st.top();
                        st.pop();
                    }
}