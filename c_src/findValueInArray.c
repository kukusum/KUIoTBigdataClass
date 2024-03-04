#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int value;
	printf("input value : ");
	scanf("%d", &value);
	
	int i;
	for (i = 0; i < 10; ++i) {
		if (value == nums[i]) {
			break;//found
		} /*elsd {
			//not found
		}*/
	}
	
	if (i != 10) {
		printf("%d is found. index : %d\n", value, i);// found
	} else {
		printf("%d is not found. \n", value);// not found
	}
	
   return 0;
}
