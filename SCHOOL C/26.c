#include <stdio.h>

int main(void)
{
    int a[100];
    int sum;

    sum == 0;

    printf("��Ϊ���鸳ֵ:\n");

    for(int i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == 0)
        {
            break;
        }
        else
        {
            sum = sum + a[i];
        }
    }

    printf("\n���������ܺ�:%d",sum);

    return 0;
}