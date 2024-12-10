#include <stdio.h>

int sorting(int *p1,int *p2);

int main(void)
{
    int a,b;
    int *p1,*p2;

    scanf("%d %d",&a,&b);

    p1 = &a;
    p2 = &b;

    if(a < b)
    {
        sorting(p1,p2);
    }
    else
    {
        printf("%d %d",*p1,*p2);
    }

    return 0;
}

int sorting(int *p1,int *p2)
{
    int *t;
    
    t = p1;
    p1 = p2;
    p2 = t;

    printf("%d %d",*p1,*p2);

    return 0;
}