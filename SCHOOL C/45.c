#include <stdio.h>
#include <string.h>

int fun(int a[]);

int main(void)
{
    int s[1000];

    fun(s);

    return 0;
}

int fun(int a[])
{
    int i,j;
    for(i = 1,j = 0; i <= 1000; i++)
    {
        if((i % 7 == 0 || i % 11 == 0) && !(i % 7 == 0 && i % 11 == 0))
        {
            a[j] = i;
            j++;
        }
    }


    for(int i = 0; i < j; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}