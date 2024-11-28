#include <stdio.h>

int main(void)
{
    int count,i,j;

    printf("100-1000的素数有:");

    for(i = 100; i < 1000; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(i == j)
        {
            printf("%d\t",i);
            count++;
        }
    }

    printf("\n共有%d个\n",count);

    return 0;
}