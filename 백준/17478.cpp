#include <iostream>

using namespace std;

string re(int n , string s1, string s2, string s3, string s4,string k1, string k2,string answer);

int main(){
    int n;
    cin >> n;
    string a = {"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n"};
    // string a = {"\" start\n\""};
    string s1 = {"\"����Լ��� ������?\"\n"};   
    string s2 = { "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n"};
    string s3 = {"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n"};
    string s4 = {"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n"};
    // string s = {"you kno jkfunction/ thatis ..\n"};
    string k1 = {"\"����Լ��� ������?\"\n" };
    string k2 = {"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n"};
    // string k = {"you kno JKfubc.. jk is KKKKKKKK\n"};
    string answer = {"��� �亯�Ͽ���.\n"};
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