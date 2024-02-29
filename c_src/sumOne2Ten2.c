#include <stdio.h>

int main(void)
{
	int sum;
	sum = 0;

	for (int i = 1 ; i <= 10; ++i) {
		sum = sum +i;
	}
/*	
	int i;
	i = 1;
	while (i <= 10) {
//		printf("%d\n", i);
		sum = sum + i;
		++i;
	}
*/	
	printf("sum[1, 10] : %d\n", sum);
	return 0;
}
