#include <iostream>

using namespace std;

string re(int n , string s1, string s2, string s3, string s4,string k1, string k2,string answer);

int main(){
    int n;
    cin >> n;
    string a = {"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n"};
    // string a = {"\" start\n\""};
    string s1 = {"\"재귀함수가 뭔가요?\"\n"};   
    string s2 = { "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n"};
    string s3 = {"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n"};
    string s4 = {"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n"};
    // string s = {"you kno jkfunction/ thatis ..\n"};
    string k1 = {"\"재귀함수가 뭔가요?\"\n" };
    string k2 = {"\"재귀함수는 자기 자신을 호출하는 함수라네\"\n"};
    // string k = {"you kno JKfubc.. jk is KKKKKKKK\n"};
    string answer = {"라고 답변하였지.\n"};
    // string answer = {"answered\n"};
    cout << a;
    cout << s1 << s2 << s3 << s4;
    cout << re(n,s1,s2,s3,s4,k1,k2,answer);
    cout << answer;


}

string re(int n,string s1, string s2, string s3, string s4, string k1, string k2,string answer){
    if(n > 1){
        s1 = "____" + s1;
        s2 = "____" + s2;
        s3 = "____" + s3;
        s4 = "____" + s4;
        k1 = "____" + k1;
        k2 = "____" + k2;
        answer = "____"+answer;
        return s1 + s2 + s3 + s4 + re(n-1,s1,s2,s3,s4,k1,k2,answer) + answer;
    }
    else{
        k2 = "____" + k2;
        k1 = "____" + k1;
        answer = "____"+answer;

    return k1 + k2  + answer;
    }

}