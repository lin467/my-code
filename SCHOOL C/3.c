#include <stdio.h>

int main(void)
{
    int num,hundred,ten,digit;

    printf("������һ����λ��:");
    scanf("%d",&num);

    digit = num % 10;
    ten = num / 10 % 10;
    hundred = num / 100 % 10;

    printf("��λ��:%d\n",digit);
    printf("ʮλ��:%d\n",ten);
    printf("��λ��:%d\n",hundred);

    return 0;
}