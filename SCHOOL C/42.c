#include <stdio.h>

int fun(int num);

int main()
{
    int num,result;

    printf("请输入一个数字:");
    scanf("%d",&num);

    result = fun(num);

    printf("%d\n",result);

    return 0;
}

int fun(int num)
{
    int sum = 1;
    while(num)
    {
        sum = sum * (num % 10);
        num = num / 10;
    }

    return sum;
}