#include <stdio.h>

int main(void)
{
	int a = 100;
	int nums[5];
	
	int *p = NULL;
	
	p = &a;
	*p = 200;
	
	p = &nums[2];
	*p = 200;
	
	printf("a : %d\n", a);
	printf("nums[2] : %d\n", nums[2]);
	
	return 0;
}
