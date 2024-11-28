#include <stdio.h>

int main(void)
{
    int a[3][3];
    int sum1,sum2,sum;

    sum1 = 0;
    sum2 = 0;
    
    printf("请输入矩阵数组:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("输入的数组:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int k = 0; k < 3; k++)
    {
        sum1= sum1 + a[k][k];
    }

    for(int k = 0; k < 3; k++)
    {
        sum2= sum2 + a[k][k];
    }

    sum = sum1 + sum2;

    printf("\n%d",sum);
}