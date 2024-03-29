#include <stdio.h>

int main()
{
    int kor = 3, eng = 5, mat = 4;
    int credits;
    int res;
    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade;

    credits = kor + eng + mat;
    grade = (kscore + escore + mscore) / 3.0;

    return 0;
}