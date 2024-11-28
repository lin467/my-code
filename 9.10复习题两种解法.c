/*
#include <stdio.h>
int alter(int a,int b,int c);

int main(void)
{
    int a,b,c;
    printf("plz,type in a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    alter(a,b,c);
}

int alter(int a,int b,int c)
{
    int max;

    if(a>b&&a>c)
    max=a;
    else if(b>a&&b>c)
    max=b;
    else
    max=c;
    printf("max is:%d",max);
    return max;
}
*/

//¿˚”√÷∏’Î
#include <stdio.h>

int alter(int a,int b,int c);

int main(void)
{
    int a,b,c;
    printf("plz,type in a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    alter(a,b,c);
}
int alter(int a,int b,int c)
{
    int max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    printf("max is:%d",max);
    return max;
}