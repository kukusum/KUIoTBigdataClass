#include "myString.h"

void my_strcat(char *des, char *src)
{
    my_strcpy(des + my_strlen(des), src);
}
void my_strcpy(char *des, char *src)
{
    int i;
    for (int i = 0; src[i] != '\0'; i++)
    {
        des[i] = src[i];
    }
    des[i] = '\0';
}
int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    int max = my_strlen(s1) > my_strlen(s2) ? my_strlen(s1) : my_strlen(s2);
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i])
        {
            return -1;
        }
    }    
    return 0;
}
int my_strlen(char *s1)
{
//    int count = 0;
  //  while (*s1++)
    //    **count;
    //return count;
    int count = -1;
    do
    {
        ++count;
    } while (s1[count] != '\0');
    return count;

}*/