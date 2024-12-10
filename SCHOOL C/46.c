#include <stdio.h>

int fun(int s[],int num);

int main(void)
{
    int s[1000];
    int num;

    scanf("%d",&num);

    printf("%d",fun(s,num));

    return 0;
}

int fun(int s[],int num)
{
    int sum,j,i,m;
    m = 0;

    for(i = 100; i <= num; i++)
    {
        sum = 0;
        j = i;
        while(j)
        {
            sum = sum + j % 10;
            j = j / 10;
        }

        if(sum == 10)
        {
            s[m] = i;
            m++;
        }
    }

    for(int n = 0; n < m; n++)
    {
        printf("%d ",s[n]);
    }

    printf("\n");

    return m;
}