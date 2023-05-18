#include <iostream>
#include <string>
using namespace std;

int main() {

    string input ={}; // 입력받을 단어
    int max = 0;
    int result = 0;
    int again = 0;
    int count[100] ={0,}; // 단어의 개수를 저장할 도구
    cin >> input;


    for (int i=0; i<input.length(); i++) {
        if (input[i] == 'A' || input[i] == 'a') 
            count[0]++; // A
        else if (input[i] == 'B' || input[i] == 'b') 
            count[1]++; // B
        else if (input[i] == 'C' || input[i] == 'c') 
            count[2]++; // C
        else if (input[i] == 'D' || input[i] == 'd') 
            count[3]++; // D
        else if (input[i] == 'E' || input[i] == 'e') 
            count[4]++; // E
        else if (input[i] == 'F' || input[i] == 'f') 
            count[5]++; // F
        else if (input[i] == 'G' || input[i] == 'g') 
            count[6]++; // G
        else if (input[i] == 'H' || input[i] == 'h') 
            count[7]++; // H
        else if (input[i] == 'I' || input[i] == 'i') 
            count[8]++; // I
        else if (input[i] == 'J' || input[i] == 'j') 
            count[9]++; // J
        else if (input[i] == 'K' || input[i] == 'k') 
            count[10]++; // K
        else if (input[i] == 'L' || input[i] == 'l') 
            count[11]++; // L
        else if (input[i] == 'M' || input[i] == 'm') 
            count[12]++; // M
        else if (input[i] == 'N' || input[i] == 'n') 
            count[13]++; // N
        else if (input[i] == 'O' || input[i] == 'o') 
            count[14]++; // O
        else if (input[i] == 'P' || input[i] == 'p') 
            count[15]++; // P
        else if (input[i] == 'Q' || input[i] == 'q') 
            count[16]++; // Q
        else if (input[i] == 'R' || input[i] == 'r') 
            count[17]++; // R
        else if (input[i] == 'S' || input[i] == 's') 
            count[18]++; // S
        else if (input[i] == 'T' || input[i] == 't') 
            count[19]++; // T
        else if (input[i] == 'U' || input[i] == 'u') 
            count[20]++; // U
        else if (input[i] == 'V' || input[i] == 'v') 
            count[21]++; // V
        else if (input[i] == 'W' || input[i] == 'w') 
            count[22]++; // W
        else if (input[i] == 'X' || input[i] == 'x') 
            count[23]++; // X
        else if (input[i] == 'Y' || input[i] == 'y') 
            count[24]++; // Y
        else if (input[i] == 'Z' || input[i] == 'z') 
            count[25]++; // Z
    }

    for (int i=0; i<26; i++) {
            if (count[i] > max) {
                max = count[i];
                result = i+65;
            }
            else if (count[i] == max) {
                again = 1;
            }
    }

    char al = result;
    if (again == 0) {
        cout << al ;
    }
    else if (again == 1) {
        cout << "?" ;
    }
    
    return 0;
}