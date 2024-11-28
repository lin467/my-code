#include <stdio.h>
#include <math.h>

int fab(int a,int b);

int main(void)
{
    int a,b,z;
    printf("请输入a和b的值:");
    scanf("%d %d",&a,&b);

    z = fab(a,b);
    printf("两数之差的绝对值是:%d\n",z);

    return 0;
}

int fab(int a,int b)
{
    int z = abs(a - b);
    return z;
}