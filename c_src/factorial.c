#include <stdio.h>

long long int factorial(int n)
{
	long long int result = 1LL;
		for (int i= 2; i <= n; ++i) {
			result = result * i;
		}
		
		
	return result;
}
int main(void)
{
	for (int i = 1; i <+ 100; ++i) {
		long long int result = factorial(i);
		
		printf("%d! = %lld\n", i, result);
	}
	
	return 0;
}
