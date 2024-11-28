#include <stdio.h>

int main(void)
{
    int a[20],t;

    printf("请输入20个整数:");

    for(int i = 0; i < 19; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 19 - i; j++)
        {
            if(a[j] > a[j+1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for(int i = 0; i < 20; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

}