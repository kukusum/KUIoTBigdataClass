#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	//int isOdd = (num % 2 == 1);
	//int isOdd = (num % 2 != 0);
	int isOdd = num % 2;
	
	printf("num: %d --- is odd : %d\n", num, isOdd);
	return 0;
}
