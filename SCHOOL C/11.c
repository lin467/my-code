#include <stdio.h>

int main(void)
{
    int a,b,c,temp;

    printf("��������������:");
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

    printf("��С�������:%d %d %d\n",a,b,c);

    return 0;
}