/*#include <stdio.h>

int main(void);
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int sum;
	sum = 0;
	for (int i = 0; i < 10; ++i) {
		sum = sum + nums[i];//= 은 같다는 의미가 아님, ex) sum += nums[i];(사용가능)
	}
	
	printf("sum: %d\n", sum);
	return 0;
}
*/

#include <stdio.h>

//int sumArray(int pArr[], int size)
//int sumArray(const int*pArr, int size)
//int sumArray(intpArr[10], int size)
int sumArray(int *pArr, int size) // constant
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum +pArr[i];	// *(pArr + i)
	}
	
	return sum;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int sum;
	sum = sumArray(nums, 10);
//	sum = sumArray(&nums[0]);
//	sum = sumArray(nums + 5, 5);
//	&nums[5]
	
	printf("sum : %d\n", sum);
	return 0;
}

/*
	sum = sumArray(nums);

#include <stdio.h>

int main(void) {

	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};

	int sum = 0;
	sum = sumArray(nums);
	
    for (int i = 0; i < 10; ++i) {
        sum += nums[i];
    }

    printf("sum: %d\n", sum);

    return 0;
}*/
