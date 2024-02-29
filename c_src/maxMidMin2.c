#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);	
	
	int max, mid, min;
	if (a > b) {
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	
	if (c > max) {
		mid = max;
		max = c;
	} else if (c > min) {
		mid = c;
	} else {
		mid = min;
		min = c;
	}
	
	printf("max: %d, mid: %d, min: %d\n", max, mid, min);
	return 0;
}

/*	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	// a b c, a c b, b c a, b a c, c b a, c a b 
		if (a > b && a > c && b > c) {
			max = a, mid = b, min = c;
		} else if (a > b && a > c && b < c) {
			max = a, mid = c, min = b;
		} else if (a < b && a < c && b > c) {
			max = b, mid = c, min = a;
		} else if (a < b && a > c && b > c) {
			max = b, mid = a, min = c;
		} else if (a < b && a < c && b < c) {
			max = c, mid = b, min = a;
		} else {
			max = c, mid = a, min = b;
		}
	//max mid min ???
	
	
	printf("max: %d, mid: %d, min: %d\n", max, mid, min);
	
	*/
