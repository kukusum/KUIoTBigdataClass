#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	printf("input size : ");
	scanf("%d", &size);
	
//	int nums[size];		// after c99...
//	int *pArr = malloc(4 * size);
	int *pArr = malloc(sizeof(int) * size); //heap 영역 malloc...
	
	for (int i = 0; i < size; ++i) {
//		nums[i] = i + 1;
		pArr[i] = i + 1;
	}
	
	for (int i = 0; i < size; ++i) {
//		printf("%d ", nums[i]);
		printf("%d ", pArr[i]);
	}
	printf("\n");
	
	free(pArr); //heap 영역 free...
	
	return 0;
}

// heap메모리 필요할때만들고 다쓰면 없앤다...
