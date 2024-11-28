#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c,s,C,S;


    printf("请输入三角形的一边边长:");
    scanf("%f",&a);

    printf("请输入三角形的一边边长:");
    scanf("%f",&b);

    printf("请输入三角形的一边边长:");
    scanf("%f",&c);

    s = (a + b + c) / 2;
    C = a + b + c;
    S = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("三角形的周长是:%.3f\n三角形的面积:%.3f\n",C,S);

    return 0;
}