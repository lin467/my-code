#include <stdio.h>

int main(void)
{
    int a[10];

    printf("������10����Ϊ���鸳ֵ:\n");

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
