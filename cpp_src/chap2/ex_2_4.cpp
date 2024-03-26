#include <iostream>
#include <string> // string 헤더 추가
using namespace std;

int main() {
    cout << "input name >> ";

    string name; // char 배열 대신 string 객체 사용
    getline(cin, name); // 공백 포함된 문자열을 입력 받음

    cout << "name is " << name << ".";

    return 0;
}