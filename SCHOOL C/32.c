#include <stdio.h>

int main(void)
{
    int num,count,i;
    int a[100];

    count = 0;
    i = 0;

    printf("请输入一个数:");
    scanf("%d",&num);

    int k = num;
    while(k != 0)
    {
        a[i] = k % 8;
        count++;
        k = k / 8;
        i++;
    }

    for(int i = count - 1; i >= 0; i--)
    {
        printf("%d",a[i]);
    }

    return 0;
}