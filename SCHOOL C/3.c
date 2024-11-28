#include <stdio.h>

int main(void)
{
    int num,hundred,ten,digit;

    printf("请输入一个三位数:");
    scanf("%d",&num);

    digit = num % 10;
    ten = num / 10 % 10;
    hundred = num / 100 % 10;

    printf("个位是:%d\n",digit);
    printf("十位是:%d\n",ten);
    printf("百位是:%d\n",hundred);

    return 0;
}