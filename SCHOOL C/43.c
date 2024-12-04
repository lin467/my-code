#include <stdio.h>

int Prime(int num);

int main()
{
    int num;

    printf("请输入一个数字大(于2小于10000):");
    scanf("%d",&num);

    for(int i = 2; i <= num; i++)
    {
        if(num % i == 0 && Prime(i))
        { 
            printf("%d ",i);
        }
    }

    return 0;
}

int Prime(int num)
{
    int j;
    for(j = 2; j < num; j++)
    {
        if(num % j == 0)
        {
            break;
        }
    }

    if(num == j)
    {
        return 1;
    }

    return 0;
}