#include <stdio.h>

int main(void)
{
    int i,a;
    float sum;
    sum = 1.0;
    a = -1;

    for(i = 2; i <=10 ;i++)
    {
        sum = sum + 1.0 / i * a;
        a = a * (-1);
    }
    printf("sum = %f\n",sum);
}