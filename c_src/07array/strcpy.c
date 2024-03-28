#include <stdio.h>
#include <string.h>

int main (void)
{
    char str1 [80] = "cat";
    char str2 [80];
//    char *p;
//    char q[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

//    printf("%s \n", p);

    return 0;
}