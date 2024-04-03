#include <iostream>
#include <string>
using namespace std;

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
    vector<string> result = split(dateStr, '/');
    sscanf(dateStr.c_str(), "%d/%d/%d", &year, &month, &day);
}

// show() 함수 구현
void Date::show()
{
    cout << year << "/" << month << "/" << day << endl;
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