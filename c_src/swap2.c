#include <stdio.h>

void swap(int *pa, int *pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void) {
    int a, b;
    a = 100;
    b = 200;

    printf("a : %d\tb : %d\n", a, b);
    swap(&a, &b);
    printf("a : %d\tb : %d\n", a, b);

    return 0;
}

/*#include <stdio.h>

void swap(int *pa, int *pb)
{
	int tmp = a;
	*pa = *pb; //a = b;
	*pb = tmp; //b = tmp;
	
//	return; //결과값이 없을땐 안써도됨
}

int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	printf("a : %d\tb : %d\n", a, b);
	
	swap(a, b);
	
	printf("a : %d\tb : %d\n", a, b);
	return 0;
}*/


/*{	
	int tmp = a;
	a = b;
	b = tmp;
}*/
