#include <stdio.h>

int main(void)
{
    int count,i,j;

    printf("100-1000��������:");

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

    printf("\n����%d��\n",count);

    return 0;
}