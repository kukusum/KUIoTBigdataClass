#include <stdio.h>

int main (void)
{
    char name1[6] = {'T', 'r', 'a', 'c', 'e', '\0'};
    char name2[5] = {'G', 'r', 'a', 'c', 'e'};

    printf("name1 : %s \n\r", name1);
    printf("name2 : %s \n\r", name2);
    
    return 0;
}