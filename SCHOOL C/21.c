#include <stdio.h>

int main(void)
{
    int n,m,r,p,gbs;

    printf("��������������:");
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
    
    printf("���Լ����%d\n��С��������%d\n",n,gbs);

    return 0;
}