#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    char name1[6] = {'T', 'r', 'a', 'c', 'e', '\0'};
    char name2[6] = {'G', 'r', 'a', 'c', 'e', '\0'};

    int c = a + b;

    printf("name1 : %s \n", name1);
    printf("name2 : %s \n", name2);
    printf("name1 : %p \n", (void *)name1);
    printf("name2 : %p \n", (void *)name2);

    return 0;
}