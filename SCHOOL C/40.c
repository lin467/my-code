#include <stdio.h>

int del(int a[],int n);

int main(void)
{
    int new,m;
    int a[10000];

    printf("����������Ԫ�ظ���:");
    scanf("%d",&m);

    printf("��Ϊ���鸳ֵ:");
    for(int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }

    new = del(a,m);

    for(int i = 0; i < new; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}    

int del(int a[],int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == a[i + 1])
        {
            for(int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
    }

    return n;
}