#include <stdio.h>

int main(void)
{
    int age = 25, chest = 95;
    
    char size;
    
    if (age < 20)
    {
        if  (chest > 95)
        {
            size = 'L';
        }
        else if (chest >= 85)
        {
            size = 'M';
        }

        else
        {
            size = 'S';
        }
                
    }
    // 수정해야함..
    if (age > 25)
    {
        if  (chest > 95)
        {
            size = 'L';
        }
        else if (chest >= 85)
        {
            size = 'M';
        }

        else
        {
            size = 'S';
        }
                
    }


    
    printf("사이즈는 %c입니다.\n", size);
    
    return 0;
}