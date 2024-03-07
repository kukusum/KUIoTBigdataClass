#include <stdio.h>
#include "serial.h"

int main(void)
{
	for (int i = 1; i <= 10; ++i) {
		int number = getSerialNumber();
		printf("BENZ_EQ300_% 10d\n", number);
	}
	
	for (int i = 1; i <= 5; ++i) {
		int number = getSerialNumber();
		printf("BENZ_EQ300_% 10d\n", number);
	}
	
	return 0;
}
