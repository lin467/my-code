#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c,sum;

    for(int i = 100; i <= 999; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;

        sum = pow(a,3) + pow(b,3) + pow(c,3);

        if(sum == i)
        {
            printf("%.d\n",i);
        }
    }
    
    return 0;
}