#include <stdio.h>

int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *p;
	
	p = nums;
	
	for (int i = 0; i < 5; ++i) {
		printf("nums[%d] : %d\n", i, nums[i]);
	}
	
	for (int i = 0; i < 5; ++i) {
//		printf("*(nums + %d) : %d\n", i, *(nums + i);
		printf("*(nums + %d) : %d\n", i, *(nums + i));
	}
	
	for (int i = 0; i < 5; ++i) {
		printf("p[%d] : %d\n", i, p[i]);
	}
	
	for (int i = 0; i < 5; ++i) {
		printf("*(p + %d) : %d\n", i, *(p + i));
	}
	printf("\n");
	
	return 0;
}
