#include <stdio.h>

int main(void)
{
    float F,C;

    printf("请输入一个华氏温度:");
    scanf("%f",&F);

    C = (5.0 / 9.0) * (F - 32.0);

    printf("对应的摄氏温度:%.3f\n",C);

    return 0;
}