/*#include <stdio.h>

int findMaxInArray(void)
{
	int findMaxInArray = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum +pArr[i];	// *(pArr + i)
	
	return 0;
}

int main(void)
{
   int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
   int max;
	max = findMaxInArray(nums, 10);
*/
/*
#include <stdio.h>

int findMaxInArray(int pArr[], int size) {
    int max = pArr[0];  // 배열의 첫 번째 요소를 최댓값으로 초기화
    for (int i = 1; i < size; ++i) {
        if (pArr[i] > max) {
            max = pArr[i];  // 최댓값 갱신
        }
    }
    return max;
}

int main(void) {
    int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
    int max;
    */
	
	
/*	max = nums[0];
   for (int i = 0; i < 10; ++i) {
		if (max < nums[i]) {
			max = nums[i];
		} /*else {
			max = max;
		}
	}
	
   printf("max: %d\n", max);
   return 0;
}
*/
/*
#include <stdio.h>

int findMaxInArray(int pArr[], int size) {
    int max = pArr[0];  // 배열의 첫 번째 요소를 최댓값으로 초기화
    for (int i = 1; i < size; ++i) {
        if (pArr[i] > max) {
            max = pArr[i];  // 최댓값 갱신
        }
    }
    return max;
}

int main(void) {
    int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
    int max;

    max = findMaxInArray(nums, 10);
    printf("최댓값: %d\n", max);

    return 0;
}
*/

#include<stdio.h>
/*
int findMaxInArray(int pArr[], int size) {
    int max = pArr[0];  // 배열의 첫 번째 요소를 최댓값으로 초기화
    for (int i = 1; i < size; ++i) {
        if (pArr[i] > max) {
            max = pArr[i];  // 최댓값 갱신
*/
int findMaxInArray(const int *pArr, int size)
{
	int max = pArr[-0];
	for (int i = 1; i < size; ++i) {
		if (max < pArr[i]) {
			max = pArr[i];
		}
	}
	
	return max;
}

int main(void)
{
	int nums[10] = {50, 90, 10, 20, 40, 80, 70, 100, 30, 60};
	
	int max;
	max = findMaxInArray(nums, 10);
	
	printf("max : %d\n", max);
	return 0;
}
