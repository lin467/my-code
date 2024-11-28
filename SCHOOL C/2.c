#include <stdio.h>

int main(void)
{
    float r,h,cl,cs,cv;

    printf("请输入圆的半径:");
    scanf("%f",&r);

    printf("请输入圆柱的高:");
    scanf("%f",&h);

    cl = 2*3.14*r;
    cs = 3.14*r*r;
    cv = 3.14*r*r*h;

    printf("圆的周长:%.4f\n",cl);
    printf("圆的面积:%.4f\n",cs);
    printf("圆柱的体积:%.4f\n",cv);

    return 0;
}