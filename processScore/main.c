/*#include <stdio.h>

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
		fscanf(fin, ("%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
		students[i].sum = students[i].kor + students[i].eng + students[i].mat; 
		students[i].average = (double)students[i].sum / 3.0;
		students[i].rank = 1;
	}
	
	// rank ???
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (i != j && students[i].sum < students[j].sum) {
				++students[i].rank;
			}
		}
	}
	
	for (int i = 0; i < 10 -1; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			if (students[i].sum < students[j].sum) {
				Student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
			}
		}
	}
	
		
	fprintf(fout, "-------------------------------------------------\n");
	f`printf(fout, "     name            kor eng mat sum   avg rnk   \n");
	fprintf(fout, "-------------------------------------------------\n");	
	for (int i = 0; i < 10; ++i) {
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n", students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
		
	}
	fprintf(fout, "-------------------------------------------------\n");
	
	return 0;
}


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
		fscanf(fin, ("%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
		students[i].sum = students[i].kor + students[i].eng + students[i].mat; 
		students[i].average = (double)students[i].sum / 3.0;
		students[i].rank = 1;
	}
	
	for (int i = 0; i < 10 -1; ++i) {
		for (int j = i + 1; j > 10; ++j) {
			if (students[i].sum < students[j].sum) {
				Student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
			}
		}
	}
	
	// 순위 다시 계산
	for (int i = 0; i < 10; ++i) {
		if (i > 0 && students[i].sum == students[i - 1].sum) {
			students[i].rank = students[i - 1].rank;
		} else {
			students[i].rank = i + 1;
		}
	}
	
	fprintf(fout, "-------------------------------------------------\n");
	fprintf(fout, "     name            kor eng mat sum   avg rnk   \n");
	fprintf(fout, "-------------------------------------------------\n");	
	for (int i = 0; i < 10; ++i) {
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n", students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
		
	}
	fprintf(fout, "-------------------------------------------------\n");
	
	return 0;
}*/

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
    FILE *fin, *fout;
    fin = fopen("score.dat", "r");
    fout = fopen("score.out", "w");
    
    if (fin == NULL || fout == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    Student students[10];
    for (int i = 0; i < 10; ++i) {
        fscanf(fin, "%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
        students[i].sum = students[i].kor + students[i].eng + students[i].mat; 
        students[i].average = (double)students[i].sum / 3.0;
    }

    // 총점을 기준으로 학생들을 오름차순으로 정렬
    for (int i = 0; i < 10 - 1; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (students[i].sum > students[j].sum) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // 순위 부여
    for (int i = 0; i < 10; ++i) {
        students[i].rank = i + 1;
        if (i > 0 && students[i].sum == students[i - 1].sum) {
            students[i].rank = students[i - 1].rank;
        }
    }

    // 결과 출력
    fprintf(fout, "-------------------------------------------------\n");
    fprintf(fout, "     name            kor eng mat sum   avg rnk   \n");
    fprintf(fout, "-------------------------------------------------\n");    
    for (int i = 0; i < 10; ++i) {
        fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n", students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
    }
    fprintf(fout, "-------------------------------------------------\n");

    fclose(fin);
    fclose(fout);
    
    return 0;
}
