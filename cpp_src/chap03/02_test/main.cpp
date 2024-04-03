#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// 사용자함수...
vector<string> split(string str, char Delimiter)
{
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}

// class
class Date {
private:
    // member variable
    int year;
    int month;
    int day;

public:
    // 생성자 선언
    Date(int y = 0, int m = 0, int d = 0);
    Date(string dateStr);

    // 멤버 함수 선언
    void show();
    int getYear();
    int getMonth();
    int getDay();
};

// 생성자 구현
Date::Date(int y, int m, int d) : year(y), month(m), day(d) 
{
    // 
}

// 날짜 문자열로부터 날짜를 초기화하는 생성자 구현
Date::Date(string dateStr) 
{
    vector<string> result = split(dateStr, '/'); //구글 검색해서 넣음...
    //sscanf(dateStr.c_str(), "%d/%d/%d", &year, &month, &day);

    year = stoi(result[0]);
    month = stoi(result[1]);
    day = stoi(result[2]);
}

// show() 함수 구현
void Date::show()
{
    cout << year << "년" << month << "월" << day << "일" << endl;
}

// getYear(), getMonth(), getDay() 함수 구현
int Date::getYear() 
{
    return year;
}

int Date::getMonth() 
{
    return month;
}

int Date::getDay() 
{
    return day;
}

int main() 
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");

    independenceDay.show();

    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}



/*
#include <iostream>
using namespace std;

//#include "Date.h"

class Date
{
protected:

private:

public:
    show();
    int birth;
    int independenceDay;
    int getYear;
    int getMonth;
    int getDay;
};

Date::Date()
{
    //
}
Date::Date(2014, 3, 20)
{
    birth = 0;
    independenceDay = 0;
}
Date::Date("1945/8/15")
{
    //
}


int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' birth.getDay() << endl;


    return 0;
}
*/