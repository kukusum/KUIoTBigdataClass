#include <stdio.h>

int main(void)
{
 	int man, woman;
 	scanf("%d %d", &man, &woman);
 	//double man, woman;
 	//scanf("%lf %lf", &man, &woman);
 	
 	//double manRatio = 1.0 * man / (man + woman) * 100.0;
 	//double womanRatio = (0.0 + woman / (man + woman) * 100.0;
 	double manRatio = (double)man / (double)(man + woman) * (double)100;
 	double womanRatio = (double)woman / (man + woman) * 100;
 	
 	printf("#man : %d\tman Ratio : %.2f%%\n", man, manRatio);
 	printf("#woman : %d\twoman Ratio : %.2f%%\n", woman, womanRatio);
 	return 0;
 }
