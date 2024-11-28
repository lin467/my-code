#include <stdio.h>

int translate(int num);

int main(void)
{
    int num;

    printf("请输入一个十进制数:");
    scanf("%d",&num);

    translate(num);

    return 0;
}

int translate(int num)
{
    int i,n;
    int a[10000];
    i = 0;

    printf("输入要取多少进制的数:");
    scanf("%d",&n);

    while(num)
    {
        a[i] = num % n;
        num = num / n;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d",a[j]);
    }

    return 0;
}