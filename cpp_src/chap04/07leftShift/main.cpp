#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; // 세미콜론 추가

    cout << "아래에 문자열을 입력하세요. 빈칸이 있어도 됩니다. (한글안됨) " << endl; // << 추가
    getline(cin, s, '\n'); // cin 객체 추가

    int len = s.length();
    
    for(int i=0; i<len; i++)
    {
        string first = s.substr(0, 1);
        string sub = s.substr(1, len-1);
        s = sub + first;
        cout << s << endl;
    }

    return 0;
}