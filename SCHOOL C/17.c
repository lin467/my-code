#include <stdio.h>

int main(void)
{
    int k;
    float i,j,sum;
    sum = 0.0;

    for(i = 2.0, j = 1.0, k = 0; k < 15; k++)
    {
        sum = sum + i / j;
        i = i + j;
        j = i - j; 
    }

    printf("%f\n",sum);
    
    return 0
}