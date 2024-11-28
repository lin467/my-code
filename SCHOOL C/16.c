#include <stdio.h>

int main(void)
{
    int sum;
    sum = 0;

    for(int i = 1; i <= 99; i+=2)
    {
        sum = sum + i;
    }

    printf("%d\n",sum);

    return 0;
}