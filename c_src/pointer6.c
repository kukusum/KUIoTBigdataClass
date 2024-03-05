#include <stdio.h>

int main(void)
{
	int a = 100;
	double d = 3.14;
	
	void *p;
	
	p = &a;
//	*p = 200;
	*(int *)p = 200;
	
	p = &d;
	*(double *)p = 2.718;
	
	printf("a : %d\td : %f\n", a, d);
	return 0;
}
