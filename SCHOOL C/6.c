#include <stdio.h>

int main(void)
{
    float F,C;

    printf("������һ�������¶�:");
    scanf("%f",&F);

    C = (5.0 / 9.0) * (F - 32.0);

    printf("��Ӧ�������¶�:%.3f\n",C);

    return 0;
}