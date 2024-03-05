#include <stdio.h>

int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *p;
	
	p = nums;		// p = &nums[]0;
	
	printf("*p : %d\n", *p);
	++p;
	printf("*p : %d\n", *p);
	
	p = nums;
	
	printf("*(p + 2) : %d\n", *(p + 2));
	
	return 0;
}
