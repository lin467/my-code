#include <stdio.h>

int main(void)
{
    int b,n,num;
    int a[1000];

    printf("�������������ָ���:");
    scanf("%d",&n);

    printf("����������:\n");

    for(int m = 0; m < n; m++)
    {
        scanf("%d",&a[m]);
    }

    for(int j = 0; j < n; j++)
    {
        printf("%d ",a[j]);
    }

    printf("\n��������ɾ������:");
    scanf("%d",&b);

    for(int i = 0,j = 0; i < n; i++)
    {
        if(a[i] != b)
        {
            a[j] = a[i];
            j++;
        }
        else
        {
            num++;
        }
    }

    for(int i = 0; i < n - num; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}