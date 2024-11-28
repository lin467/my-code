#include <stdio.h>

int main(void)
{
    int a,b,c,temp;

    printf("请输入三个整数:");
    scanf("%d,%d,%d",&a,&b,&c);

    if(b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(c < a)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(c < b)
    {
        temp = c;
        c = b;
        b = temp;
    }

    printf("从小到大输出:%d %d %d\n",a,b,c);

    return 0;
}