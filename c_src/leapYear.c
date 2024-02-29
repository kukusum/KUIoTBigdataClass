#include <stdio.h>

int main(void) 
{
	int year;
	
	scanf("%d", &year);
	
	int isLeap;
	
	isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	//isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
	printf("%d is a leap : %d\n", year, isLeap);
	return 0;

	//int year;

    // 사용자로부터 연도를 입력 받음
	//printf("연도를 입력하세요: ");
	//scanf("%d", &year);
	//int result = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    // 윤년 여부를 판별하고 결과 출력
	//printf("%d년은 %d입니다.", year, result);

    //return 0;
}
