#include <stdio.h>

int main(void)
{
    int num,qian,bai,shi,ge;

    printf("������һ����λ����:");
    scanf("%d",&num);

    ge = num % 10;
    shi = num / 10 % 10;
    bai = num / 100 % 10;
    qian = num / 1000 % 10;

    printf("%d\n",ge + shi + bai + qian);

    return 0;
}