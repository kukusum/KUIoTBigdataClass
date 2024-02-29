#include <stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		//a, b
		if (c > a) {
			printf("max: %d mid: %d min %d\n", c, a, b);
		} else if (c > b) {
			printf("max: %d mid: %d min %d\n", a, c, b);
		} else {
			printf("max: %d mid: %d min %d\n", a, b, c);
		}
		} else {
			//b, a
		if (c > b) {
			printf("max: %d mid: %d min %d\n", c, b, a);
		} else if (c > a) {
			printf("max: %d mid: %d min %d\n", b, c, a);
		} else {
			printf("max: %d mid: %d min %d\n", b, a, c);
		}
		}
	
	
	
/*	
	printf("input num : ");
	scanf("%d, %d, %d", &a, &b, &c);
	
	if (a > b && a > c && b > c) {
		printf("%d, %d, %d\n", a, b, c);
	} else if (a > b && a > c && b < c) {
		printf("%d, %d, %d\n", a, c, b);		
	} else if (a < b && a < c && b > c) {
		printf("%d, %d, %d\n", b, c, a);
	} else if (a < b && a > c && b > c) {
		printf("%d, %d, %d\n", b, a, c);
	} else if (a > b && a < c && b < c) {
		printf("%d, %d, %d\n", c, a, b);
	} else {
		printf("%d, %d, %d\n", c, b, a);
	}
	
	// a b c, a c b, b c a, b a c, c b a, c a b 
*/		
	return 0;
}
