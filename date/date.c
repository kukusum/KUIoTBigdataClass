#include <stdio.h>
#include "date.h"

void printDate1(Date d)
{
	printf("%d/%d/%d\n", d.year, d.month, d.day);
}

void printDate2(Date *pd)
{
	//printf("%d/%d/%d\n", (*pd).year, (*pd).month, (*pd).day);
	printf("%d, %d, %d\n", pd->year, pd->month, pd->day);
}
