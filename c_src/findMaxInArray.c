#include <stdio.h>

int main(void)
{
   int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
   int max;
	max = nums[0];
   for (int i = 0; i < 10; ++i) {
		if (max < nums[i]) {
			max = nums[i];
		} /*else {
			max = max;
		}*/
	}

   printf("max: %d\n", max);
   return 0;
}
