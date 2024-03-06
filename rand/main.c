#include <stdio.h>
//#include <stdlib.h>
#include <time.h>
#include "rand.h"

//전역변수를 사용하거나 각각 인자를 사용한다.

//void my_srand(int s); // 함수선언(function declaration)

int main(void)
{
	my_srand(time(NULL));
	for (int i = 1; i <= 10; ++i) {
		int value = my_rand();
		
		printf("value : %d\n", value);
	}
	
	return 0;
}


/*  블록에서 인자를 사용한방법
	int seed;
	srand(time(NULL), &seed);
	
	seed = 0;
	
	int value = rand(&seed);
	*/
