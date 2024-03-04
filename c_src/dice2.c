#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	int nums[7] = {0};//int nums[6] = {0};//int nums[6];
	
	srand(time(NULL));
	for (int i = 0; i <= 10000; ++i) {
		int dice = rand() % 6 + 1;
		++nums[dice];
		//nums[dice-1] = nums[dice-1] + 1; //nums[dice]++;
	}
	
/*	for (int i = 0; i < 6; ++i) {
		printf("%d --- %d\n", i + 1, nums[i]);
	}*/
	
	for (int i = 1; i <= 6; ++i) {
		printf("%d --- %d\n", i, nums[i]);
	}
	
	return 0;
}
	
/*{
	srand(time(NULL));	//seed
	
	for (int i = 1; i <= 100; ++i) {
		int dice = rand() %6 + 1;		//random number(난수)
		printf("%d\n", dice);
	}
	
	return 0;
}
*/
//라이브러리함수 == printf, scanf
