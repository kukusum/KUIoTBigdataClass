#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

void printDate(int year, int month, int day)
{
	printf("(%d/%d/%d)\n", year, month, day);
}

int main(void)
{
	int today_year, today_month, today_day;
	today_year = 2024;	
	today_month = 3;
	today_day = 11;
	
	struct date today;
	today.year = 2024;
	today.month = 3;
	today.day = 11;
	
	int tmp_year, tmp_month, tmp_day;
	tmp_year = today_year;
	tmp_month = today_month;
	tmp_day = today_day;
	
	struct date tmp;
	tmp = today;
	
	printDate(tmp_year, tmp_month, tmp_day);
	printdate2(tmp);	
	return 0;
}
