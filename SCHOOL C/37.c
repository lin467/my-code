#include <stdio.h>
#include <math.h>

int fab(int a,int b);

int main(void)
{
    int a,b,z;
    printf("������a��b��ֵ:");
    scanf("%d %d",&a,&b);

    z = fab(a,b);
    printf("����֮��ľ���ֵ��:%d\n",z);

    return 0;
}

int fab(int a,int b)
{
    int z = abs(a - b);
    return z;
}