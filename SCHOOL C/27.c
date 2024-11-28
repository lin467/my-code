#include <stdio.h>

int main(void)
{
    int b,n,num;
    int a[1000];

    printf("请输入数组数字个数:");
    scanf("%d",&n);

    printf("请输入数字:\n");

    for(int m = 0; m < n; m++)
    {
        scanf("%d",&a[m]);
    }

    for(int j = 0; j < n; j++)
    {
        printf("%d ",a[j]);
    }

    printf("\n请输入想删除的数:");
    scanf("%d",&b);

    for(int i = 0,j = 0; i < n; i++)
    {
        if(a[i] != b)
        {
            a[j] = a[i];
            j++;
        }
        else
        {
            num++;
        }
    }

    for(int i = 0; i < n - num; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}