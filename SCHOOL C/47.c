#include <stdio.h>

int goldbach(int num);

int main(void)
{
    int num;

    scanf("%d",&num);

    goldbach(num);

    return 0;
}

int goldbach(int num)
{
    int i,j,k,a[1000];
    k = 2;
    j = 0;
    a[0] = 2;
    a[1] = 3;
    a[3] = 5;
    for(j = 6; j <= num; j++)
    {
        for(i = 2; i < j; i++)
        {
            if(j % i == 0)
            {
                break;
            }
        }
        if(j == i)
        {
            a[k] = j;
            k++;
        }
    }
    for(int m = 0; m <= k; m++)
    {   
        int n = m;
        while(a[m] + a[n] != num)
        {
            if(a[n] != a[k])
            {
                n++;
            }
            else
            {
                break;
            }
        }
        if(a[m] + a[n] == num)
        {
            printf("%d + %d = %d\n",a[m],a[n],num);
            break;
        }
    }
    return 0;
}