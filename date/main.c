#include "date.h"

int main(void)
{
	Date today;
	today.year = 2024;
	today.month = 3;
	today.day = 11;
	
	Date birthday = {2005, 8, 2};
	
	printDate1(today);
	printDate1(birthday);
	
	printDate2(&today);
	printDate2(&birthday);
	
	return 0;
}
