#include <stdio.h>

int main(void)
{
    float r,h,cl,cs,cv;

    printf("������Բ�İ뾶:");
    scanf("%f",&r);

    printf("������Բ���ĸ�:");
    scanf("%f",&h);

    cl = 2*3.14*r;
    cs = 3.14*r*r;
    cv = 3.14*r*r*h;

    printf("Բ���ܳ�:%.4f\n",cl);
    printf("Բ�����:%.4f\n",cs);
    printf("Բ�������:%.4f\n",cv);

    return 0;
}