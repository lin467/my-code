#include <stdio.h>

int main(void)
{
    int a[10];

    printf("请输入10个数为数组赋值:\n");

    for(int i = 0; i< 10; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int j = 9; j > 0; j--)
    {
        printf("%d\t",a[j]);
    }

    return 0;
}
