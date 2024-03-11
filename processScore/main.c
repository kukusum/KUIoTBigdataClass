#include <stdio.h>

typedef struct {
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
} Student;

int main(void)
{
	Student students[10];
	for (int i = 0; i < 10; ++i) {
		scanf("%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
		students[i].sum = students[i].kor + students[i].eng + students[i].mat; 
		students[i].average = (double)students[i].sum / 3.0;
		students[i].rank = 1;
	}
	
	// rank ???
	
	printf("-------------------------------------------------\n");
	printf("     name               kor eng mat sum   avg rnk\n");
	printf("-------------------------------------------------\n");	
	for (int i = 0; i < 10; ++i) {
		printf("%-20s %3d %3d %3d %3d %6.2f %2d\n", students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
		
	}
	printf("-------------------------------------------------\n");
	
	return 0;
}
