#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c,s,C,S;


    printf("�����������ε�һ�߱߳�:");
    scanf("%f",&a);

    printf("�����������ε�һ�߱߳�:");
    scanf("%f",&b);

    printf("�����������ε�һ�߱߳�:");
    scanf("%f",&c);

    s = (a + b + c) / 2;
    C = a + b + c;
    S = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("�����ε��ܳ���:%.3f\n�����ε����:%.3f\n",C,S);

    return 0;
}