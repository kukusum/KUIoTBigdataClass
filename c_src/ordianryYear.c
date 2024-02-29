#include <stdio.h>

int main(void) 
{
	int year;
	scanf("%d", &year);
	
	int isOrdianry;
	
	isOrdianry = !(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	//isOrdianry = (year % 4 != 0 || year % 100 == 0 && year % 400 != 0);
	//이 식은 "4의 배수가 아니거나 100의 배수이며, 400의 배수가 아닌 경우"를 의미합니다.
//이 조건은 정상적인 평년을 판별하는 조건이 아닙니다. 실제로 이 조건은 잘못된 조건으로, 윤년을 올바르게 판별하지 못합니다.
//따라서, 첫 번째 식이 올바른 평년을 판별하는 조건입니다.
	printf("%d is a leap : %d\n", year, isOrdianry);
	return 0;
}
