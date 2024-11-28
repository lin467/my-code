#include <stdio.h>
int main(void)
{
    int num,sum;
    sum = 0;

    printf("请输入一个四位整数:");
    scanf("%d",&num);
    
    for(int i = 1; i <= 1000; i = i * 10)
    {
        sum = sum + (num / i % 10);
    }

    printf("%d\n",sum);

    return 0;
}