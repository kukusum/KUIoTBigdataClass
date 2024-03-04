#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));	//seed
	
	for (int i = 1; i <= 10; ++i) {
		int dice = rand() %6 + 1;		//random number(난수)
		printf("%d\n", dice);
	}
	
	return 0;
}

//라이브러리함수 == printf, scanf
