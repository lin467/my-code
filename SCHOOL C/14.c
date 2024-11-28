#include <stdio.h>

int main(void)
{
    int i;
    float sum;
    sum = 1.0;

    for(i = 2; i <= 10; i++)
    {
        if(i % 2 == 0)
        sum = sum - 1.0 / i;
        else
        sum = sum + 1.0 / i;

    }

    printf("sum = %f\n",sum);
}