#include <stdio.h>

int main(void)
{
    int n,m,r,p,gbs;

    printf("请输入两个整数:");
    scanf("%d%d",&n,&m);

    p = m * n;
    r = m % n;

    while(r)
    {
        m = n;
        n = r;
        r = m % n;
    }

    gbs = p / n;
    
    printf("最大公约数是%d\n最小公倍数是%d\n",n,gbs);

    return 0;
}